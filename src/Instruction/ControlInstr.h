#ifndef CONTROLINSTR_DEF
#define CONTROLINSTR_DEF

#include <cstdint>
#include <Store.h>
#include <Stack.h>
#include <Instance.h>
#include <Exception.h>
#include <Bincode.h>

namespace Instruction{
	//[Later]TODO: void ctrl_unreachable(Store &store, Stack &coreStack);
	void ctrl_block(Stack &coreStack, char blocktype); // FIXME: Change continue mechanism
	void ctrl_loop(Stack &coreStack, char blocktype);  // FIXME: Change continue mechanism
	//[Later]TODO: void ctrl_if(Stack &coreStack);
	//[Later]TODO: void ctrl_else(Stack &coreStack);
	void ctrl_br(std::uint32_t depth, Stack &coreStack); // FIXME: Work in progress
	//TODO: void ctrl_br_if(Stack &coreStack);
	//TODO: void ctrl_br_table(Stack &coreStack);
	void ctrl_return(Stack &coreStack);
	void ctrl_call(std::uint32_t funcAddr, Store &store, Stack &coreStack);
	void ctrl_call_indirect(std::uint32_t typeidx, Store &store, Stack &coreStack); // FIXME: Work in progress [Later]
	void ctrl_end(Stack &coreStack);  // FIXME: Change continue mechanism
	void invoke(std::uint32_t funcAddr, Store &store, Stack &coreStack, ModuleInst *moduleInst = nullptr);
}

#endif