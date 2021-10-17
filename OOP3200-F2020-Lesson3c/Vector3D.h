#pragma once

#ifndef __VECTOR3D__
#define __VECTOR3D__
#include <assert.h>
#include <string>
#include "Vector2D.h"
#include <iostream>

// template class T
template <class T>
class Vector3D
{
public:
	//constructor
	Vector3D(T x = static_cast<T>(0.0), T y = static_cast<T>(0.0), T z = static_cast<T>(0.0));
	Vector3D(const std::string& x, const std::string& y, const std::string& z);
	Vector3D(const Vector2D& vector2D);


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
	// friend ostream << operator overload
	friend std::ostream& operator<<(std::ostream& out, const Vector3D& rhs)
	{
		// output the rhs
		out << rhs.ToString();
		//return out
		return out;
	}
	// friend istream >> operator overload
	friend std::istream& operator>>(std::istream& in, Vector3D& rhs)
	{
		// input
		in >> rhs.m_x;
		in.ignore();
		in >> rhs.m_y;
		in.ignore();
		in >> rhs.m_z;
		return in;
	}
	// ToString method declaration
	std::string ToString() const;
//private member variables with type T
private:
	// declared m_x
	T m_x;
	// declared m_y
	T m_y;
	//declared m_z
	T m_z;
};
// implementation part

template <class T>
// with initialization
Vector3D<T>::Vector3D(T x, T y, T z) : m_x(x), m_y(y), m_z(z)
{

}
// template class t
template <class T>
Vector3D<T>::Vector3D(const std::string& x, const std::string& y, const std::string& z)
{
	// checking for the type of t is int then convert to int
	if (typeid(T) == typeid(int))
	{
	
		m_x = std::stoi(x);
		m_y = std::stoi(y);
		m_z = std::stoi(z);
	}

	// if t type is float then covert to float
	if (typeid(T) == typeid(float))
	{

		m_x = std::stof(x);
		m_y = std::stof(y);
		m_z = std::stof(z);
	}
	// if type t is double then convert to double
	if (typeid(T) == typeid(double))
	{

		m_x = std::stod(x);
		m_y = std::stod(y);
		m_z = std::stod(z);
	}
	// if not throw an assert saying error no conversion possible
	assert((typeid(T) != typeid(int)) || (typeid(T) != typeid(float)) || (typeid(T) != typeid(double)), "error no conversion possible");

}

// 
template <class T>
Vector3D<T>::Vector3D(const Vector2D& vector2D)
{
		m_x = static_cast<T>(vector2D.GetX());
		m_y = static_cast<T>( vector2D.GetY());
		m_z = static_cast<T>(0.0);

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

// set mutator to set the value f x y z
template <class T>
void Vector3D<T>::set(const T x, const T y, const T z)
{
	// setting the private member variable to the x, y and z
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


