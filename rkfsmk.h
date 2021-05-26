#ifndef __RKFSMK_H
#define __RKFSMK_H

int rkfsmk_format(char *device_name, char *volume_name);
int rkfsmk_start(void *handle);
int rkfsmk_create(void **handle, char *device_name, char *volume_name, unsigned int align_size);
void rkfsmk_add_dir(void *handle, char *path, int hidden);
int rkfsmk_add_file(void *handle, char *path, char *filename, int hidden, int size);
void rkfsmk_destroy(void *handle);
unsigned long long rkfsmk_disk_size_get(void *handle);

#endif