# Linux Terminal

# File System

![file system in linux](/X/Screenshot%202023-09-16%20at%208.36.13%20PM.png)

- Tree structure
- Recommended adherence to FSSTND (Linux File System STaNDard): A Linux file system standard.
- Typically follows the FHS (Filesystem Hierarchy Standard) for directory structure (FHS defines the primary directories in Linux).
- In Linux, directories are separated by /(forward slash), while in Windows, folders are separated by (backslash).
- In Linux, the term used is "directory," while in Windows, it's "folder."

`/`: Top level directory in linux file system.

`~`: Home directory accessed automatically when entering the terminal.

`/bin`: Top-level directory in the Linux file system containing basic binary commands used for operating the system.

`/boot`: Top-level directory containing critical kernel images and boot information files essential for booting. Plays a crucial role when specified in `/etc/lilo.conf` for kernel boot images.

`/dev`: Directory storing device files, allowing you to inspect information about connected devices.

`/etc`: Directory housing system configuration files, including network-related settings, user information, password information, file system details, security files, and more.

`/home`: Directory where Linux users' home directories (with the same name as their user accounts) are created.

`/media`: Directory for connecting external devices such as CD-ROMs and USB drives.

`/mnt`: Directory for temporarily mounting file systems.

`/root`: Directory serving as the home directory for the system administrator, inaccessible to regular users.

`/sbin`: Directory similar to `/bin`, but containing programs that can only be executed by the root user.

`/sys`: Directory containing Linux kernel-related information.

`/tmp`: Directory for storing temporary data generated during system usage, reset upon boot.

`/usr`: Directory housing essential executable files, library files, header files, and more. Most applications and files are stored here.

`/var`: Directory where data and logs generated during system operation are stored.