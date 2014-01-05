#ifndef __TEST_GOBJ_H__
#define __TEST_GOBJ_H__

#include<glib-object.h>


/*
*  Basic Macros, GObjects BoilerPlate.
*
*/

#define TEST_TYPE_GOBJ		(test_gobj_get_type())
#define TEST_GOBJ(obj)			(G_TYPE_CHECK_INSTANCE_CAST((obj), TEST_TYPE_GOBJ, TestGObj))
#define TEST_IS_GOBJ(obj)		(G_TYPE_CHECK_INSTANCE_TYPE((obj), TEST_TYPE_GOBJ))
#define TEST_GOBJ_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST((klass), TEST_TYPE_GOBJ, TestGObjClass))
#define TEST_IS_GOBJ_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE(klass), TEST_TYPE_GOBJ))
#define TEST_GOBJ_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS((obj), TEST_TYPE_GOBJ, TestGObjClass))

typedef struct _TestGObj	TestGObj;
typedef struct _TestGObjClass	TestGObjClass;

/** Object **/
struct _TestGObj
{
  GObject parent_instance;
  int count;
};


/** Class **/
struct _TestGObjClass
{
  GObjectClass parent_class;
};


void test_gobj_do_action(TestGObj *obj, gchar *msg);



#endif
