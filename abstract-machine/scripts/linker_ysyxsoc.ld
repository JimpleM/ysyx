ENTRY(_start)
MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  flash : ORIGIN = 0x30000000, LENGTH = 256M
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
  } > sram AT> flash
  _data_lma_start = LOADADDR(.data);
  _data_lma_end   = .;
  _data_vma_start = ORIGIN(sram);
  edata = .;
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > sram AT> flash
  _stack_top = 0x0f001200;
  . = _stack_top + 0x00000D00;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = 0x0f000800;
  _heap_end   = 0x0f001200;
}
