#include <functional>
#include <iostream>

#include <spdlog/spdlog.h>
#include <docopt/docopt.h>
#include <wasm_export.h>

static constexpr auto USAGE =
  R"(Naval Fate.

    Usage:
          naval_fate ship new <name>...
          naval_fate ship <name> move <x> <y> [--speed=<kn>]
          naval_fate ship shoot <x> <y>
          naval_fate mine (set|remove) <x> <y> [--moored | --drifting]
          naval_fate (-h | --help)
          naval_fate --version
 Options:
          -h --help     Show this screen.
          --version     Show version.
          --speed=<kn>  Speed in knots [default: 10].
          --moored      Moored (anchored) mine.
          --drifting    Drifting mine.
)";

int main(int argc, const char **argv) {
/*
  std::map<std::string, docopt::value> args = docopt::docopt(USAGE,
    { std::next(argv), std::next(argv, argc) },
    true,// show help if requested
    "Naval Fate 2.0");// version string

  for (auto const &arg : args) {
    std::cout << arg.first << arg.second << std::endl;
  }

*/
  std::ignore = argc;
  std::ignore = argv;
  //Use the default logger (stdout, multi-threaded, colored)
  spdlog::info("Hello, {}!", "World");

  fmt::print("Hello, from {}\n", "{fmt}");

  //char *buffer, error_buf[128];
  //wasm_module_t module;
  //wasm_module_inst_t module_inst;
  //wasm_function_inst_t func;
  //wasm_exec_env_t exec_env;
  //uint32 size, stack_size = 8092, heap_size = 8092;

  /* initialize the wasm runtime by default configurations */
  wasm_runtime_init();

  spdlog::info("WASM Runtime INIT");
  /* read WASM file into a memory buffer */
  //buffer = read_wasm_binary_to_buffer(…, &size);

  /* add line below if we want to export native functions to WASM app */
  //wasm_runtime_register_natives(...);

  /* parse the WASM file from buffer and create a WASM module */
  //module = wasm_runtime_load(buffer, size, error_buf, sizeof(error_buf));

  /* create an instance of the WASM module (WASM linear memory is ready) */
  //module_inst = wasm_runtime_instantiate(module, stack_size, heap_size,
}
