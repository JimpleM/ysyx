ENTRY(_start)
MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
 /* . = _pmem_start + _entry_offset; */
  . = ORIGIN(flash);
  .text : {
    *(entry)
    *(.text*)
  } > flash AT> flash
  etext = .;
  _etext = .;
  .rodata : {
    *(.rodata*)
    _rodata_end = .;
  } > flash AT> flash
  .data : {
    *(.data)
  } > psram AT> flash
  _data_lma_start = LOADADDR(.data);
  _data_lma_end   = .;
  _data_vma_start = ORIGIN(psram);
  edata = .;
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > psram AT> flash
  _stack_top = ORIGIN(psram)+0x00010000;
  . = _stack_top + 0x000E0000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ORIGIN(psram)+0x00100000;
  _heap_end   = ORIGIN(psram)+0x00400000;
}
