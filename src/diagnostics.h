#pragma once

namespace PIC {

enum Diagnostics
{
    no_diag = 0,
    save_positions = 1,
    save_grid_values = save_positions << 1,
    save_all = save_positions | save_grid_values
};

} // namespace PIC
