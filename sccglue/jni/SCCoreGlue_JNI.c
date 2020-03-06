/* !---- DO NOT EDIT: This file autogenerated by com/jogamp/gluegen/JavaEmitter.java on Wed Mar 04 21:28:16 EST 2020 ----! */

#include <jni.h>
#include <stdlib.h>

#include <assert.h>


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_begin_statement(int connection_id, java.lang.String statement)
 *     C function: int scc_begin_statement(int connection_id, const char *  statement);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1begin_1statement__ILjava_lang_String_2(JNIEnv *env, jclass _unused, jint connection_id, jstring statement) {
  const char* _strchars_statement = NULL;
  int _res;
  if ( NULL != statement ) {
    _strchars_statement = (*env)->GetStringUTFChars(env, statement, (jboolean*)NULL);
  if ( NULL == _strchars_statement ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"statement\" in native dispatcher for \"scc_begin_statement\"");
      return 0;
    }
  }
  _res = scc_begin_statement((int) connection_id, (char *) _strchars_statement);
  if ( NULL != statement ) {
    (*env)->ReleaseStringUTFChars(env, statement, _strchars_statement);
  }
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_bind_double(int connection_id, int index, double value)
 *     C function: int scc_bind_double(int connection_id, int index, double value);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1bind_1double__IID(JNIEnv *env, jclass _unused, jint connection_id, jint index, jdouble value) {
  int _res;
  _res = scc_bind_double((int) connection_id, (int) index, (double) value);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_bind_long(int connection_id, int index, long value)
 *     C function: int scc_bind_long(int connection_id, int index, long value);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1bind_1long__IIJ(JNIEnv *env, jclass _unused, jint connection_id, jint index, jlong value) {
  int _res;
  _res = scc_bind_long((int) connection_id, (int) index, (long) value);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_bind_null(int connection_id, int index)
 *     C function: int scc_bind_null(int connection_id, int index);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1bind_1null__II(JNIEnv *env, jclass _unused, jint connection_id, jint index) {
  int _res;
  _res = scc_bind_null((int) connection_id, (int) index);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_bind_text(int connection_id, int index, java.lang.String text)
 *     C function: int scc_bind_text(int connection_id, int index, const char *  text);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1bind_1text__IILjava_lang_String_2(JNIEnv *env, jclass _unused, jint connection_id, jint index, jstring text) {
  const char* _strchars_text = NULL;
  int _res;
  if ( NULL != text ) {
    _strchars_text = (*env)->GetStringUTFChars(env, text, (jboolean*)NULL);
  if ( NULL == _strchars_text ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"text\" in native dispatcher for \"scc_bind_text\"");
      return 0;
    }
  }
  _res = scc_bind_text((int) connection_id, (int) index, (char *) _strchars_text);
  if ( NULL != text ) {
    (*env)->ReleaseStringUTFChars(env, text, _strchars_text);
  }
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_end_statement(int connection_id)
 *     C function: int scc_end_statement(int connection_id);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1end_1statement__I(JNIEnv *env, jclass _unused, jint connection_id) {
  int _res;
  _res = scc_end_statement((int) connection_id);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_get_column_count(int connection_id)
 *     C function: int scc_get_column_count(int connection_id);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1get_1column_1count__I(JNIEnv *env, jclass _unused, jint connection_id) {
  int _res;
  _res = scc_get_column_count((int) connection_id);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: double scc_get_column_double(int connection_id, int column)
 *     C function: double scc_get_column_double(int connection_id, int column);
 */
JNIEXPORT jdouble JNICALL
Java_io_sqlc_SCCoreGlue_scc_1get_1column_1double__II(JNIEnv *env, jclass _unused, jint connection_id, jint column) {
  double _res;
  _res = scc_get_column_double((int) connection_id, (int) column);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: long scc_get_column_long(int connection_id, int column)
 *     C function: long scc_get_column_long(int connection_id, int column);
 */
JNIEXPORT jlong JNICALL
Java_io_sqlc_SCCoreGlue_scc_1get_1column_1long__II(JNIEnv *env, jclass _unused, jint connection_id, jint column) {
  long _res;
  _res = scc_get_column_long((int) connection_id, (int) column);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: java.lang.String scc_get_column_name(int connection_id, int column)
 *     C function: const char *  scc_get_column_name(int connection_id, int column);
 */
JNIEXPORT jstring JNICALL
Java_io_sqlc_SCCoreGlue_scc_1get_1column_1name__II(JNIEnv *env, jclass _unused, jint connection_id, jint column) {
  const char *  _res;
  _res = scc_get_column_name((int) connection_id, (int) column);
  if (NULL == _res) return NULL;
  return (*env)->NewStringUTF(env, _res);
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: java.lang.String scc_get_column_text(int connection_id, int column)
 *     C function: const char *  scc_get_column_text(int connection_id, int column);
 */
JNIEXPORT jstring JNICALL
Java_io_sqlc_SCCoreGlue_scc_1get_1column_1text__II(JNIEnv *env, jclass _unused, jint connection_id, jint column) {
  const char *  _res;
  _res = scc_get_column_text((int) connection_id, (int) column);
  if (NULL == _res) return NULL;
  return (*env)->NewStringUTF(env, _res);
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_get_column_type(int connection_id, int column)
 *     C function: int scc_get_column_type(int connection_id, int column);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1get_1column_1type__II(JNIEnv *env, jclass _unused, jint connection_id, jint column) {
  int _res;
  _res = scc_get_column_type((int) connection_id, (int) column);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: java.lang.String scc_get_last_error_message(int connection_id)
 *     C function: const char *  scc_get_last_error_message(int connection_id);
 */
JNIEXPORT jstring JNICALL
Java_io_sqlc_SCCoreGlue_scc_1get_1last_1error_1message__I(JNIEnv *env, jclass _unused, jint connection_id) {
  const char *  _res;
  _res = scc_get_last_error_message((int) connection_id);
  if (NULL == _res) return NULL;
  return (*env)->NewStringUTF(env, _res);
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_get_last_insert_rowid(int connection_id)
 *     C function: int scc_get_last_insert_rowid(int connection_id);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1get_1last_1insert_1rowid__I(JNIEnv *env, jclass _unused, jint connection_id) {
  int _res;
  _res = scc_get_last_insert_rowid((int) connection_id);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_get_total_changes(int connection_id)
 *     C function: int scc_get_total_changes(int connection_id);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1get_1total_1changes__I(JNIEnv *env, jclass _unused, jint connection_id) {
  int _res;
  _res = scc_get_total_changes((int) connection_id);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: void scc_init()
 *     C function: void scc_init();
 */
JNIEXPORT void JNICALL
Java_io_sqlc_SCCoreGlue_scc_1init__(JNIEnv *env, jclass _unused) {
  scc_init();
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_open_connection(java.lang.String filename, int flags)
 *     C function: int scc_open_connection(const char *  filename, int flags);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1open_1connection__Ljava_lang_String_2I(JNIEnv *env, jclass _unused, jstring filename, jint flags) {
  const char* _strchars_filename = NULL;
  int _res;
  if ( NULL != filename ) {
    _strchars_filename = (*env)->GetStringUTFChars(env, filename, (jboolean*)NULL);
  if ( NULL == _strchars_filename ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"filename\" in native dispatcher for \"scc_open_connection\"");
      return 0;
    }
  }
  _res = scc_open_connection((char *) _strchars_filename, (int) flags);
  if ( NULL != filename ) {
    (*env)->ReleaseStringUTFChars(env, filename, _strchars_filename);
  }
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.SCCoreGlue
 *    Java method: int scc_step(int connection_id)
 *     C function: int scc_step(int connection_id);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_SCCoreGlue_scc_1step__I(JNIEnv *env, jclass _unused, jint connection_id) {
  int _res;
  _res = scc_step((int) connection_id);
  return _res;
}


