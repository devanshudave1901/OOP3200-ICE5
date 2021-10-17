#pragma once

#ifndef __VECTOR3D__
#define __VECTOR3D__
#include <string>

template <class T>
class Vector3D
{
public:
	//constructor
	Vector3D(T x = static_cast<T>(0.0), T y = static_cast<T>(0.0), T z = static_cast<T>(0.0));
	//destructor
		~Vector3D();
	

	// accessors
		T GetX() const;
		T GetY() const;
		T GetZ() const;

	// mutators
		void setX(const T x);
		void setY(const T y);
		void setZ(const T z);
		void set(const T x, const T y, const T z);
	std::string ToString() const;
private:
	T m_x;
	T m_y;
	T m_z;
};
// imlementation part

template <class T>
// with initialization
Vector3D<T>::Vector3D(T x, T y, T z) : m_x(x), m_y(y), m_z(z)
{

}
template <class T>
// definition for the destructor
Vector3D<T>::~Vector3D()
{}

// definition for GetX() which return m_x
template <class T>
T Vector3D<T>::GetX() const
{
	// returns m_x
	return m_x;
}
// definition of GetY which return m_y
template <class T>
T Vector3D<T>::GetY() const
{
	// return m_y
	return m_y;
}
// definition of GetZ() which returns m_z
template <class T>
T Vector3D<T>::GetZ() const
{
	// return m_z
	return m_z;
}
// definition for setX() setter
template <class T>
void Vector3D<T>::setX(const T x)
{
	// this sets the m_X to x variable
	m_x = x;
}
// definition for setter setY()
template <class T>
void Vector3D<T>::setY(const T y)
{
	m_y = y;
}
// definition for setZ which sets the value of z to the m_Z
template <class T>
void Vector3D<T>::setZ(const T z)
{
	m_z = z;
}
template <class T>
void Vector3D<T>::set(const T x, const T y, const T z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

// definiton for ToString method
template <class T>
std::string Vector3D<T>::ToString() const
{

	// returns the build string
	return "(" + std::to_string(m_x) + "," + std::to_string(m_y) + "," + std::to_string(m_z) + ")";
}

#endif


