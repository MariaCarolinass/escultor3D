# include "sculptor.h"

int main()
{
    Sculptor sculptor(6, 6, 6);
    sculptor.setColor(255, 0, 0, 1.0);
    sculptor.putVoxel(2, 3, 1);
    sculptor.cutVoxel(2, 3, 1);

    return 0;
}
