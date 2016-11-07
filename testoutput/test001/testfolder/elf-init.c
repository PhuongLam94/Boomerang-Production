// address: 0x10474
int main(int argc, char *argv[], char *envp[]) {
    __size32 ACCbit6; 		// r227
    __size32 ACCbits; 		// r224
    __size32 MASTER; 		// r156
    __size32 SIMP; 		// r167
    __size16 *SLVFLGMAP; 		// r146
    __size32 SMPDUP; 		// r208
    void *XROVLY; 		// r115
    __size8 a; 		// r8
    __size32 bitsMASTER; 		// r136
    __size32 bitsSIMP; 		// r158
    __size32 bitsSMPDUP; 		// r117
    unsigned short dptr; 		// r11

    if (.. != 0) {
        if (a.. != 1) {
            dptr = *XROVLY + 20;
            a = *(__size8 *)(dptr);
            if (a.. == 1) {
                if (.. == 0) {
                    dptr = *SLVFLGMAP + 20;
                     = *(__size8 *)(dptr);
                    a.bits.bit5 = 1;
                    *(__size8*)(dptr) = a;
L1:
                }
            }
        } else {
            if (.. != 1) {
                if (a.. != 1) {
                    goto L1;
                }
            } else {
                dptr = *SLVFLGMAP + 20;
                 = *(__size8 *)(dptr);
                a.bits.bit5 = 1;
                *(__size8*)(dptr) = a;
            }
        }
    } else {
        dptr = *SLVFLGMAP + 20;
         = *(__size8 *)(dptr);
        a.bits.bit5 = 1;
        *(__size8*)(dptr) = a;
    }
    return a.byte;
}

//phuong.lam test
