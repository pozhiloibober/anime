#pragma once
//operations.h

using namespace System::Drawing;
void multiply(array<float, 2>^ A, array<float, 2>^ B, array<float, 2>^ C); //��������� ������
void identify_mat(array<float, 2>^ M); //������ ��������� �������
void move_mat(float dx, float dy, array<float, 2>^ M); //�����������
void scale_mat(float kx, float ky, array<float, 2>^ M); //���������������
void rotate_mat(float phi, array<float, 2>^ M); //��������
void scale_mat(PointF c, float kx, float ky, array<float, 2>^ M); //��������������� ������������ �����
void rotate_mat(PointF c, float ph, array<float, 2>^ M); //������� ������������ �����
PointF apply(PointF p, array<float, 2>^ M);


//operations.cpp
#include <cmath>
#include <cassert>
//#include <operations.h>
void multiply(array<float, 2>^ A, array<float, 2>^ B, array<float, 2>^ C)
{
	int p = A->GetLength(1); //0,1,2... - ���������, �� �������� ��������� �����. � ������ ������ ���-�� ��������. 0 - ������������ ���������, 1 - ��������������
	assert(p == B->GetLength(0));
	int n = A->GetLength(0), m = B->GetLength(1);
	assert(n == C->GetLength(0) && m == C->GetLength(1));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			C[i, j] = 0;
			for (int k = 0; k < p; k++)
				C[i, j] += A[i, k] * B[k, j];
		}
	}
}

void identify_mat(array<float, 2>^ M)
{
	int n = M->GetLength(0), m = M->GetLength(1);
	assert(n == 3 && m == 3);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			M[i, j] = float(i == j); //���� i == j, �� ��� true(1) � � ������� ��������� 1. ����� false(0).
		}
	}
}

void move_mat(float dx, float dy, array<float, 2>^ M)
{
	identify_mat(M);
	M[0, 2] = dx;
	M[1, 2] = dy;
}

void scale_mat(float kx, float ky, array<float, 2>^ M)
{
	identify_mat(M);
	M[0, 0] = kx;
	M[1, 1] = ky;
}

void rotate_mat(float phi, array<float, 2>^ M)
{
	identify_mat(M);
	float cs = cos(phi), sn = sin(phi);
	M[0, 0] = cs; M[0, 1] = sn; M[1, 0] = -sn; M[1, 1] = cs;
	//�������� ���� � ������ �� ��� � ���������� ����, � �� �����. ����� ������ ������ ������� ������� �� ������ +, �� ������� � -.
}

void scale_mat(PointF c, float kx, float ky, array<float, 2>^ M)
{
	scale_mat(kx, ky, M);
	PointF scaled_c = apply(c, M);
	M[0, 2] = c.X - scaled_c.X;
	M[1, 2] = c.Y - scaled_c.Y;
	//�� ������� �������� ������������ ����� ���������� �� ������� ������� �������� ������ ��������� �������� ������������ �����.	
}

void rotate_mat(PointF c, float phi, array<float, 2>^ M)
{
	rotate_mat(phi, M);
	PointF rotated_c = apply(c, M);
	M[0, 2] = c.X - rotated_c.X;
	M[1, 2] = c.Y - rotated_c.Y;
}

PointF apply(PointF p, array<float, 2>^ M)
{
	return PointF(p.X * M[0, 0] + p.Y * M[0, 1] + M[0, 2], p.X * M[1, 0] + p.Y * M[1, 1] + M[1, 2]);
	//���������� �����, "����������" �� ��� �������.
}

/*	__________________________________________________________
		������ � �����������.
#include "operations.h"*/