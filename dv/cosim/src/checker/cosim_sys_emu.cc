#include "cosim_sys_emu.h"
#include "support/file_utils.h"

cosim_sys_emu::cosim_sys_emu(const std::string& mem_desc)
    : sys_emu(
          [&]() -> sys_emu_cmd_options {
              sys_emu_cmd_options opts{};
              if (!mem_desc.empty() && file_utils::exists(mem_desc)) {
                  opts.mem_desc_file = mem_desc;
              } else {
                  opts.api_comm_path = "cosim";
              }
              return opts;
          }(),
          nullptr)
{
}
