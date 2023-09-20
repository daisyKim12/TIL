# Set PostgreSQL
This file contains all about running PostgreSQL on macOS. Install PostgreSQL on local or on docker and then connects with datagrip.

## Download Postgresql@13 in local
1. Install Homebrew
If you don't have Homebrew installed, it's a package manager for macOS that makes it easy to install various software, including PostgreSQL. Open Terminal and run the following command to install Homebrew:
```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

2. Set env to use `brew` command
```
echo 'eval "$(/opt/homebrew/bin/brew shellenv)"' >> /Users/daisy12/.profile
eval "$(/opt/homebrew/bin/brew shellenv)"
```

3. Get `homebrew/core`
```
brew tap homebrew/core
```

4. Download postgresql
```
brew install postgresql
```

5. Start PostgreSQL server in local 

This command will start PostgreSQL as a background service, and it will automatically start every time you boot your Mac.

__start postgres__
```
brew services start postgresql@13
```
__check postgres status__
```
brew services list
```
__stop postgres__
```
brew services stop postgresql@13
```

## Enter postgresql database

1. locate postgresql
```
locate psql | grep /bin
```
```
>/opt/homebrew/Cellar/postgresql@13/13.12/bin/psql
```
2. export path
```
export PATH=/opt/homebrew/Cellar/postgresql@13/13.12/bin:$PATH                           127 ✘  10:57:10  
```

3. Enter default database
```
psql postgres         
```


## Use Docker to install PostgrSQL
May be next time.

## Use School server
[in-ui-ye-ji cluster](https://skkuoverflow.com/ko/posts/school/inuiyeji/)

__Enter server__
```
ssh swji.skku.edu -l {user ID} -p {port number}
{enter password}
```

__Login PostgreSQL__
```
psql -h localhost -U db{user ID[1:]}
{enter password}
```

__exit__
```
exit
```

## Set Datagrip
Datagrip is a database IDE by JetBrains it provides development for OracleDB, MongoDB, MySQL, PostgrSQL.

### Connect local
1. In Dataase Explore find `+` sign and click.
2. Data `source` > `PostgreSQL`
3. In `General` type Host, Port, User, Password, Database
    - Host: localhost for accessing local database
    - Port: Usually 5432
    - User: UserID of your pc
    - Password: If needed add password
    - Database: Initial database name


### Connect school cluster
1. In Dataase Explore find `+` sign and click.
2. Data `source` > `PostgreSQL`
3. In `SSH/SSL` check `Using SSH tunnel`
4. Add SSH configuration no need for `Local Port`
5. In `General` add User, Password
    - User: db18312164
    - PW: ...

![General](/X/Screenshot%202023-09-19%20at%2011.02.11%20PM.png)

![SSH tunneling](/X/Screenshot%202023-09-19%20at%2011.02.44%20PM.png)
