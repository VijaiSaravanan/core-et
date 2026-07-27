#ifndef _COSIM_SYS_EMU_H_
#define _COSIM_SYS_EMU_H_

#include <string>
#include "sys_emu.h"

class cosim_sys_emu : public sys_emu
{
public:
    explicit cosim_sys_emu(const std::string& mem_desc);

    bemu::System& system() { return get_chip(); }
};

#endif // _COSIM_SYS_EMU_H_
