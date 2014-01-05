#include "test_gobj.h"

G_DEFINE_TYPE(TestGObj, test_gobj, G_TYPE_OBJECT);

static void test_gobj_class_init(TestGObjClass *klass)
{
  g_print("GObject Class Init function--->class_init()\n");
}

static void test_gobj_init(TestGObj *obj)
{
  g_print("GObject Instance Init function ---> gobj_init()\n");
}

void test_gobj_do_action(TestGObj *obj, gchar *msg)
{
  g_print("GObject public method action --- %s\n", msg);
}

int main(int argc, char** argv)
{
  g_print("::::In main function::::\n");
  g_type_init();
  TestGObj *test = g_object_new(TEST_TYPE_GOBJ, NULL);
  test_gobj_do_action(test, "Hello World\n");
  return 0;
}
