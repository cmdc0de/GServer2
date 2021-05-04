include(ExternalProject)

ExternalProject_Add (
	wasm 
	GIT_REPOSITORY https://github.com/bytecodealliance/wasm-micro-runtime.git
	#GIT_TAG WAMR-04-15-2021
	GIT_TAG main
	#PREFIX wasm
	CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=./lib
	#INSTALL_DIR ./lib
	#INSTALL_COMMAND ${CMAKE_NOOP}
	#STEP_TARGETS build
	#	GIT_SUBMODULES_RECURSE true
	#	GIT_SHALLOW true
	GIT_PROGRESS true
)

