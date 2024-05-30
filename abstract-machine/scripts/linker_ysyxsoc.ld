ENTRY(_start)
MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  . = ORIGIN(flash);

  .fsbl :{
    *(entry)
    *(.text._trm_init)
    *(.text.fsbl)
    . = ALIGN(8);
  } > flash

  _ssbl_origin = .;
  .ssbl : {
    _ssbl_ram_start = .;
    *(.text.ssbl)
    . = ALIGN(8);
    _ssbl_ram_end = .;
  } > psram AT> flash

  _test_origin = LOADADDR(.text);
  .text : {
    _text_ram_start = .;
    *(.text*)
    . = ALIGN(8);
  } > psram AT> flash
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
    *(.srodata.mainargs)
    *(.srodata.CSWTCH.13)
    . = ALIGN(8);
  } > psram AT> flash

  .data : {
    *(.data)
    *(.data._object_container)
    *(.data.working_directory)
    . = ALIGN(8);
    _data_ram_end = .;
  } > psram AT> flash

  edata = .;
  _data = .;

  .sdata : {
    *(.sdata)
    *(.sdata.p.0)
    *(.sdata.heap)
    *(.sdata._current_timezone)
    *(.sdata._rt_thread_defunct)
    *(.sdata._soft_timer_status)
    . = ALIGN(8);
    _sdata_ram_end = .;
  } > psram AT> flash

  .bss : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(8);
    _bss_end = .;
  } > psram AT> flash


  _stack_top = ALIGN(0x30000);
  . = _stack_top + 0xF000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x40000);
  _heap_end = _heap_start  + 0xF000;
}
