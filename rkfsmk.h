#ifndef __RKFSMK_H
#define __RKFSMK_H

/* ret: 0 success,-1 no devvice, -4 devvice no umount*/
int rkfsmk_format(char *device_name, char *volume_name);
int rkfsmk_format_ex(char *device_name, char *volume_name, char format_id[8]);

int rkfsmk_start(void *handle);

/* ret: 0 success,-1 no devvice, -4 devvice no umount*/
int rkfsmk_create(void **handle, char *device_name, char *volume_name, unsigned int align_size);

int rkfsmk_set_format_id(void *handle, char format_id[8]);

void rkfsmk_add_dir(void *handle, char *path, int hidden, int size);
int rkfsmk_add_file(void *handle, char *path, char *filename, int hidden, int size);
void rkfsmk_destroy(void *handle);
unsigned long long rkfsmk_disk_size_get(void *handle);

int kernel_get_file_size(char *filename, off_t *size, off_t *space);
int kernel_pre_created_file(char *filename, off_t size);
int kernel_set_alignsize(int file_fd, unsigned int alignsize);
int kernel_chk_format(char *path);

#endif