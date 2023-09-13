create table time_slot (
    time_slot_id    varchar(5),
    day             varchar(10),
    start_time      varchar(5),
    end_time        varchar(5),
    primary key (time_slot_id, day, start_time)
);

create table classroom (
    building        varchar(5),
    room_no         numeric(4,0),
    capacity        int,
    primary key (building, room_no)
);

create table section(
    course_id       varchar(5),
    sec_id          varchar(5),
    semester        varchar(20),
    year            numeric(4, 0),
    building        varchar(5),
    room_no         numeric(4,0),
    time_slot_id    varchar(5),
    primary key (course_id, sec_id, semester, year),
    foreign key (building, room_no) references classroom(building, room_no)
);

create table department(
    dept_name       varchar(20),
    building        varchar(5),
    budget          int,
    primary key (dept_name)
);

create table instructor(
    ID              varchar(5),
    name            varchar(20),
    dept_name       varchar(20),
    salary          int,
    primary key (ID),
    foreign key (dept_name) references department
);


create table teaches(
    ID              varchar(5),
    course_id       varchar(5),
    sec_id          varchar(5),
    semester        varchar(20),
    year            numeric(4,0),
    primary key (course_id, sec_id,semester,year),
    foreign key (ID) references instructor,
    foreign key (course_id, sec_id, semester, year) references section
);

create table student(
    ID              varchar(5),
    name            varchar(20),
    dept_name       varchar(20),
    tot_grad        numeric(3,1),
    primary key (ID),
    foreign key (dept_name) references department
);

create table adviser(
    s_id            varchar(5),
    i_id            varchar(5),
    foreign key (i_id) references instructor(ID),
    foreign key (s_id) references  student(ID)
);

create table takes(
    ID              varchar(5),
    course_id       varchar(5),
    sec_id          varchar(5),
    semester        varchar(20),
    year            numeric(4,0),
    grade           numeric(3,1),
    primary key (ID, course_id, sec_id, semester, year),
    foreign key (course_id, sec_id, semester, year) references section,
    foreign key (ID) references student
);

create table course (
    course_id       varchar(5),
    title           varchar(20),
    dept_name       varchar(20),
    credits         varchar(20),
    primary key (course_id),
    foreign key (dept_name) references department
);

create table prereq(
    course_id       varchar(5),
    prereq_id       varchar(5),
    foreign key (course_id) references course,
    foreign key (prereq_id) references course
);
