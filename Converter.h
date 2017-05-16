#ifndef CONVERTER_H
#define CONVERTER_H

#include <Eigen/Dense>
#include <Eigen/Core>
#include <math.h>
#include <Eigen/Geometry>

namespace RAIN_IMU
{

class Converter
{
public:
	Converter();
	~Converter();

	static Eigen::Quaterniond euler2quat(const Eigen::Vector3d &euler);
	static Eigen::Vector3d quat2euler(const Eigen::Quaterniond &q);
	static void quatNormalize(Eigen::Quaterniond &q);
	static Eigen::Quaterniond quatMultiquat(const Eigen::Quaterniond &q1, const Eigen::Quaterniond &q2);
	static Eigen::Matrix<double, 4, 4> quatleftproduct(const Eigen::Quaterniond &q0);
	static Eigen::Matrix<double, 4, 4> quatRightproduct(const Eigen::Quaterniond &q0);
	static Eigen::Matrix<double, 3, 3> quat2rotmatrix(const Eigen::Quaterniond &q0);
	static Eigen::Matrix<double, 4, 4> OmegaMatrix(const SensorData &sensordata);
};


}// namespace RAIN_IMU


#endif

