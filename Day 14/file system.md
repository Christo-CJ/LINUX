# File System

A file system is an organized collection of regular files and directories. A file system is created using the mkfs command. One of the strengths of Linux is that it supports a wide variety of file systems. The file-system types currently known by the kernel can be viewed in the Linux-specific/proc/filesystems file.

$cat/proc/filesystems

To identify your Linux file system you can use file command,

$ sudo file -sL/dev/sda1

# File-system structure

The basic unit for allocating space in a file system is a logical block, which is some multiple of contiguous physical blocks on the disk device on which the file system resides. For example, the logical block size on ext2 is 1024, 2048, or 4096 bytes.

Disk

partition

partition

partition

File

Boot Block

Super Block

i-node Block

Data Block

System

Layout of Disk Partition and File System

A file system contains the following parts:

1) Boot block: This is always the first block in a file system. The boot block is not used by the file system; rather, it contains information used to boot the operating system. Although only one boot block is needed by the operating system, all file systems have a boot block (most of which are unused).

2) Superblock: This is a single block, immediately following the boot block, which contains parameter information about the file system.
Different file systems residing on the same physical device can be of different types and sizes, and have different parameter settings (e.g., block size). This is one of the reasons for splitting a disk into multiple partitions.

3) I-node table: Each file or directory in the file system has a unique entry in the i-node table. This entry records various types of information about the file. The i-node table is sometimes also called the i-list.

4) Data blocks: The great majority of space in a file system is used for the blocks of data that form the files and directories residing in the file system.
