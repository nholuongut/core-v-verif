require_extension(EXT_XZBP);
WRITE_RD(sext_xlen(~((zext_xlen(~RS1)) >> (RS2 & (xlen-1)))));
