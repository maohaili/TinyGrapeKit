#pragma once 

#include <Camera/Camera.h>

namespace TGK {
namespace Geometry {

class Triangulator {
public:
    Triangulator(const Camera::CameraPtr camera);

    bool Triangulate(const std::vector<Eigen::Matrix3d>& G_R_Cs, 
                     const std::vector<Eigen::Vector3d>& G_p_Cs,
                     const std::vector<Eigen::Vector2d>& im_pts,
                     Eigen::Vector3d* G_p);

private:
    Camera::CameraPtr camera_;
};

} // namespace Geometry
}  // namespace TGK