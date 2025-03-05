# Link Files

There are two types of links: hard link and soft link.

## Hard Link

If you review the list of information stored in a file i-node, you will find that the i-node doesn't contain a filename; it is only the mapping within a directory list that defines the name of a file. This has a useful consequence: you can create multiple names in the same or in different directories each of which refers to the same i-node. These multiple names are known as links, or sometimes as hard links.

All native Linux and UNIX file systems support hard links. However, many non-UNIX file systems (e.g., Microsoft's VFAT) do not. (Microsoft's NTFS file system does support hard links.)

From the shell, we can create new hard links to an existing file using the In command

$ ls -li

## Symbolic (Soft) Links

A symbolic link, also sometimes called a soft link, is a special file type whose data is the name of another file. From the shell, symbolic links are created using the In-s command.

$
The pathname to which a symbolic link refers may be either absolute or relative. A relative symbolic link is interpreted relative to the location of the link itself.

Symbolic links don't have the same status as hard links. In particular, a symbolic link is not included in the link count of the file to which it refers. Therefore, if the filename to which the symbolic link refers is removed, the symbolic link itself continues to exist, even though it can no longer be dereferenced (followed). You can say that it has become a dangling link. It is even possible to create a symbolic link to a filename that doesn't exist at the time the link is created. Since a symbolic link refers to a filename, rather than an i-node number, it can be used to link to a file in a different file system. Symbolic links also do not suffer the other limitation of hard links: you can create symbolic links to directories.