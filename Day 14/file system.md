# File System

A file system is an organized collection of regular files and directories. A file system is created using the mkfs command. One of the strengths of Linux is that it supports a wide variety of file systems. The file-system types currently known by the kernel can be viewed in the Linux-specific/proc/filesystems file.

$cat/proc/filesystems

To identify your Linux file system you can use file command,

$ sudo file -sL/dev/sda1
