#ifndef GEOMETRYPIPE_H
#define GEOMETRYPIPE_H

#include "Export.h"
#include <Geometry/GeometryBase.h>

class GEOMETRY_EXPORT GeometryPipe: public GeometryBase, public StyleBase
{
public:
	GeometryPipe();
	GeometryPipe(osg::Vec3Array* points);
	~GeometryPipe();

private:
	void updateStyle();

	void updateGeomtry();
	
	void createPipe();


private:
	osg::ref_ptr<osg::UIntArray> m_pIndexs;
};

#endif//GEOMETRYPIPE_H