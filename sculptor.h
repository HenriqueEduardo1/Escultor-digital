/**
 * @file sculptor.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel {
    float r,g,b; // Colors
    float a; // Transparency
    bool isOn; // Included or not
};

class Sculptor {
private:
    Voxel ***v; // 3D matrix
    int nx,ny,nz; // Dimensions
    float r,g,b,a; // Current drawing color

public:
    /**
     * @brief Construct a new Sculptor object
     * 
     * @param _nx 
     * @param _ny 
     * @param _nz 
     */
    Sculptor(int _nx, int _ny, int _nz);

    /**
     * @brief Destroy the Sculptor object
     * 
     */
    ~Sculptor();

    /**
     * @brief Set the Color object
     * 
     * @param r 
     * @param g 
     * @param b 
     * @param a 
     */
    void setColor(float r, float g, float b, float a);

    /**
     * @brief 
     * 
     * @param x 
     * @param y 
     * @param z 
     */
    void putVoxel(int x, int y, int z);

    /**
     * @brief 
     * 
     * @param x 
     * @param y 
     * @param z 
     */
    void cutVoxel(int x, int y, int z);

    /**
     * @brief 
     * 
     * @param x0 
     * @param x1 
     * @param y0 
     * @param y1 
     * @param z0 
     * @param z1 
     */
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief 
     * 
     * @param x0 
     * @param x1 
     * @param y0 
     * @param y1 
     * @param z0 
     * @param z1 
     */
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

    /**
     * @brief 
     * 
     * @param xcenter 
     * @param ycenter 
     * @param zcenter 
     * @param radius 
     */
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);

    /**
     * @brief 
     * 
     * @param xcenter 
     * @param ycenter 
     * @param zcenter 
     * @param radius 
     */
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

    /**
     * @brief 
     * 
     * @param xcenter 
     * @param ycenter 
     * @param zcenter 
     * @param rx 
     * @param ry 
     * @param rz 
     */
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    /**
     * @brief 
     * 
     * @param xcenter 
     * @param ycenter 
     * @param zcenter 
     * @param rx 
     * @param ry 
     * @param rz 
     */
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    /**
     * @brief 
     * 
     * @param filename 
     */
    void writeOFF(const char* filename);
};

#endif