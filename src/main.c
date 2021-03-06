#include "starlark.h"
#include <stdio.h>

int
main()
{
  starlark_vm_t* vm = starlark_vm_new();
  starlark_thread_t* main_thread = starlark_thread_new(vm);
  starlark_thread_eval(main_thread, "test.star", "");
  starlark_thread_free(main_thread);
  starlark_vm_free(vm);
}