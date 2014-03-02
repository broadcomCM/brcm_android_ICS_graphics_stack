// This file was generated by the create_regs script
#define I2C0_BASE                                                0x7e205000
#define I2C0_C                                                   HW_REGISTER_RW( 0x7e205000 ) 
   #define I2C0_C_MASK                                           0x00008701
   #define I2C0_C_WIDTH                                          16
   #define I2C0_C_RESET                                          0000000000
#define I2C0_S                                                   HW_REGISTER_RW( 0x7e205004 ) 
   #define I2C0_S_MASK                                           0xffffffff
   #define I2C0_S_WIDTH                                          32
   #define I2C0_S_RESET                                          0x00000050
#define I2C0_DLEN                                                HW_REGISTER_RW( 0x7e205008 ) 
   #define I2C0_DLEN_MASK                                        0x0000ffff
   #define I2C0_DLEN_WIDTH                                       16
   #define I2C0_DLEN_RESET                                       0000000000
#define I2C0_A                                                   HW_REGISTER_RW( 0x7e20500c ) 
   #define I2C0_A_MASK                                           0x0000007f
   #define I2C0_A_WIDTH                                          7
   #define I2C0_A_RESET                                          0000000000
#define I2C0_FIFO                                                HW_REGISTER_RW( 0x7e205010 ) 
   #define I2C0_FIFO_MASK                                        0x000000ff
   #define I2C0_FIFO_WIDTH                                       8
   #define I2C0_FIFO_RESET                                       0000000000
#define I2C0_DIV                                                 HW_REGISTER_RW( 0x7e205014 ) 
   #define I2C0_DIV_MASK                                         0x0000ffff
   #define I2C0_DIV_WIDTH                                        16
   #define I2C0_DIV_RESET                                        0x000005dc
#define I2C0_DEL                                                 HW_REGISTER_RW( 0x7e205018 ) 
   #define I2C0_DEL_MASK                                         0xffffffff
   #define I2C0_DEL_WIDTH                                        32
   #define I2C0_DEL_RESET                                        0x00300030
#define I2C0_CLKT                                                HW_REGISTER_RW( 0x7e20501c ) 
   #define I2C0_CLKT_MASK                                        0x0000ffff
   #define I2C0_CLKT_WIDTH                                       16
   #define I2C0_CLKT_RESET                                       0x00000040