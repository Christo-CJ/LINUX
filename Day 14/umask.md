# The umask Command

The umask returns, or sets, the value of the system's file mode creation mask.

On Unix-like operating systems, new files are created with a default set of permissions. Specifically, a new file's permissions may be restricted in a specific way by applying a permissions "mask" called the umask. The umask command is used to set this mask, or to show you its current value.

The umask is a process attribute that specifies which permission bits should always be turned off when new files or directories are created by the process. Often, a process just uses the umask it inherits from its parent shell, with the (usually desirable) consequence that the user can control the umask of programs executed from the shell using the shell built-in command umask, which changes the umask of the shell process.

The initialization files for most shells set the default umask to the octal value 022 (-w-w-).

This value specifies that write permission should always be turned off for group and other.

$umask

0022