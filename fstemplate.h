#define MAXFNAME	14
#define BLKSIZE		512

#define INODE_BLK_STARTS_AT 3
#define DATA_BLK_STARTS_AT 11
#define SUP_BLK_STARTS_AT 1
#define EMPTY 0


struct  SupBlock;
struct INode;

int MkFS(int dev, int ninodes, int nrootdir, int blksize);
int my_memcpy (const void* dest,const void* src, int size);
int OpenFile(int dirhandle, char *fname, int mode, int uid, int gid, int attrib);
int CloseFile(int fhandle);
int CloseFile(int fhandle);
int WriteFile(int fhandle, char buf[], int nbytes);
int ReadInode(int dev, int ino, struct INode *inode);
int WriteInode(int dev, int ino, struct INode *inode);
int readSuper (int dev, struct SupBlock* sb);
int writeSuper (int dev,struct SupBlock* sb);
int AllocInode(int dev);
int FreeInode(int dev, int ino);
int AllocBlk(int dev);
int FreeBlk(int dev, int blk);
int ReadBlock(int dev, int blk, char buf[BLKSIZE]);
int WriteBlock(int dev, int blk,char buf[BLKSIZE]);
int OpenDevice(int dev);
int ShutdownDevice(int dev);
/*
int init_fs(void);
void cleanup_fs(void);
void cleanup_module (void);
int init_module (void);


void read_inode (struct inode*  _inode);
void destroy_inode (struct inode* _inode);
struct inode* alloc_inode (struct super_block* sb);
void write_inode (struct inode* _inode, int unknown);
void write_super (struct super_block*  kernel_sb );
struct super_block* read_super(struct super_block* sb, void * data, int silent);
*/
