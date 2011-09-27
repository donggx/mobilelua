typedef unsigned short wchar;
typedef wchar wchar_t;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef char* MAString;
typedef void* MAWString;
typedef void* MAAddress;
typedef int MAHandle;
typedef int MAExtent;
typedef unsigned char byte;
typedef unsigned long ulong;
// End of typedefs.
#define TRANS_NONE 0
#define TRANS_ROT90 5
#define TRANS_ROT180 3
#define TRANS_ROT270 6
#define TRANS_MIRROR 2
#define TRANS_MIRROR_ROT90 7
#define TRANS_MIRROR_ROT180 1
#define TRANS_MIRROR_ROT270 4
#define HANDLE_SCREEN 0
#define HANDLE_LOCAL 0
#define RES_OUT_OF_MEMORY -1
#define RES_BAD_INPUT -2
#define RES_OK 1
#define MAS_CREATE_IF_NECESSARY 1
#define STERR_GENERIC -2
#define STERR_FULL -3
#define STERR_NONEXISTENT -5
#define CONNERR_GENERIC -2
#define CONNERR_MAX -3
#define CONNERR_DNS -4
#define CONNERR_INTERNAL -5
#define CONNERR_CLOSED -6
#define CONNERR_READONLY -7
#define CONNERR_FORBIDDEN -8
#define CONNERR_UNINITIALIZED -9
#define CONNERR_CONLEN -10
#define CONNERR_URL -11
#define CONNERR_UNAVAILABLE -12
#define CONNERR_CANCELED -13
#define CONNERR_PROTOCOL -14
#define CONNERR_NETWORK -15
#define CONNERR_NOHEADER -16
#define CONNERR_NOTFOUND -17
#define CONNERR_SSL -18
#define CONNERR_USER -1000000
#define CONNOP_READ 1
#define CONNOP_WRITE 2
#define CONNOP_CONNECT 7
#define CONNOP_FINISH 11
#define CONNOP_ACCEPT 16
#define CONN_MAX 32
#define BTADDR_LEN 6
#define CONN_FAMILY_INET4 1
#define CONN_FAMILY_BT 2
#define HTTP_GET 1
#define HTTP_POST 2
#define HTTP_HEAD 3
#define HTTP_PUT 4
#define HTTP_DELETE 5
#define MAK_UNKNOWN 0
#define MAK_FIRST 0
#define MAK_BACKSPACE 8
#define MAK_TAB 9
#define MAK_CLEAR 12
#define MAK_RETURN 13
#define MAK_PAUSE 19
#define MAK_ESCAPE 27
#define MAK_SPACE 32
#define MAK_EXCLAIM 33
#define MAK_QUOTEDBL 34
#define MAK_POUND 35
#define MAK_HASH 35
#define MAK_GRID 35
#define MAK_DOLLAR 36
#define MAK_AMPERSAND 38
#define MAK_QUOTE 39
#define MAK_LEFTPAREN 40
#define MAK_RIGHTPAREN 41
#define MAK_ASTERISK 42
#define MAK_STAR 42
#define MAK_PLUS 43
#define MAK_COMMA 44
#define MAK_MINUS 45
#define MAK_PERIOD 46
#define MAK_SLASH 47
#define MAK_0 48
#define MAK_1 49
#define MAK_2 50
#define MAK_3 51
#define MAK_4 52
#define MAK_5 53
#define MAK_6 54
#define MAK_7 55
#define MAK_8 56
#define MAK_9 57
#define MAK_COLON 58
#define MAK_SEMICOLON 59
#define MAK_LESS 60
#define MAK_EQUALS 61
#define MAK_GREATER 62
#define MAK_QUESTION 63
#define MAK_AT 64
#define MAK_LEFTBRACKET 91
#define MAK_BACKSLASH 92
#define MAK_RIGHTBRACKET 93
#define MAK_CARET 94
#define MAK_UNDERSCORE 95
#define MAK_BACKQUOTE 96
#define MAK_A 97
#define MAK_B 98
#define MAK_C 99
#define MAK_D 100
#define MAK_E 101
#define MAK_F 102
#define MAK_G 103
#define MAK_H 104
#define MAK_I 105
#define MAK_J 106
#define MAK_K 107
#define MAK_L 108
#define MAK_M 109
#define MAK_N 110
#define MAK_O 111
#define MAK_P 112
#define MAK_Q 113
#define MAK_R 114
#define MAK_S 115
#define MAK_T 116
#define MAK_U 117
#define MAK_V 118
#define MAK_W 119
#define MAK_X 120
#define MAK_Y 121
#define MAK_Z 122
#define MAK_DELETE 127
#define MAK_KP0 256
#define MAK_KP1 257
#define MAK_KP2 258
#define MAK_KP3 259
#define MAK_KP4 260
#define MAK_KP5 261
#define MAK_KP6 262
#define MAK_KP7 263
#define MAK_KP8 264
#define MAK_KP9 265
#define MAK_KP_PERIOD 266
#define MAK_KP_DIVIDE 267
#define MAK_KP_MULTIPLY 268
#define MAK_KP_MINUS 269
#define MAK_KP_PLUS 270
#define MAK_KP_ENTER 271
#define MAK_KP_EQUALS 272
#define MAK_UP 273
#define MAK_DOWN 274
#define MAK_RIGHT 275
#define MAK_LEFT 276
#define MAK_INSERT 277
#define MAK_HOME 278
#define MAK_END 279
#define MAK_PAGEUP 280
#define MAK_PAGEDOWN 281
#define MAK_FIRE 284
#define MAK_SOFTLEFT 285
#define MAK_SOFTRIGHT 286
#define MAK_PEN 291
#define MAK_BACK 292
#define MAK_MENU 293
#define MAK_RSHIFT 303
#define MAK_LSHIFT 304
#define MAK_RCTRL 305
#define MAK_LCTRL 306
#define MAK_RALT 307
#define MAK_LALT 308
#define MAK_SEARCH 309
#define MAKB_LEFT 0x00001
#define MAKB_UP 0x00002
#define MAKB_RIGHT 0x00004
#define MAKB_DOWN 0x00008
#define MAKB_FIRE 0x00010
#define MAKB_SOFTLEFT 0x00020
#define MAKB_SOFTRIGHT 0x00040
#define MAKB_0 0x00080
#define MAKB_1 0x00100
#define MAKB_2 0x00200
#define MAKB_3 0x00400
#define MAKB_4 0x00800
#define MAKB_5 0x01000
#define MAKB_6 0x02000
#define MAKB_7 0x04000
#define MAKB_8 0x08000
#define MAKB_9 0x10000
#define MAKB_ASTERISK 0x20000
#define MAKB_STAR 0x20000
#define MAKB_HASH 0x40000
#define MAKB_POUND 0x40000
#define MAKB_GRID 0x40000
#define MAKB_CLEAR 0x80000
#define EVENT_BUFFER_SIZE 256
#define EVENT_CLOSE_TIMEOUT 2000
#define EVENT_TYPE_CLOSE 1
#define EVENT_TYPE_KEY_PRESSED 2
#define EVENT_TYPE_KEY_RELEASED 3
#define EVENT_TYPE_CONN 4
#define EVENT_TYPE_BT 5
#define EVENT_TYPE_POINTER_PRESSED 8
#define EVENT_TYPE_POINTER_RELEASED 9
#define EVENT_TYPE_POINTER_DRAGGED 10
#define EVENT_TYPE_FOCUS_LOST 13
#define EVENT_TYPE_FOCUS_GAINED 14
#define EVENT_TYPE_LOCATION 16
#define EVENT_TYPE_LOCATION_PROVIDER 17
#define EVENT_TYPE_SCREEN_CHANGED 21
#define EVENT_TYPE_CHAR 22
#define EVENT_TYPE_TEXTBOX 23
#define EVENT_TYPE_HOMESCREEN_SHOWN 24
#define EVENT_TYPE_HOMESCREEN_HIDDEN 25
#define EVENT_TYPE_SCREEN_STATE_ON 26
#define EVENT_TYPE_SCREEN_STATE_OFF 27
#define EVENT_TYPE_WIDGET 28
#define EVENT_TYPE_BLUETOOTH_TURNED_OFF 29
#define EVENT_TYPE_BLUETOOTH_TURNED_ON 30
#define EVENT_TYPE_IMAGE_PICKER 31
#define EVENT_TYPE_SMS 32
#define EVENT_TYPE_SENSOR 33
#define RUNTIME_MORE 1
#define RUNTIME_JAVA 2
#define RUNTIME_SYMBIAN 3
#define RUNTIME_WINCE 4
#define REPORT_PANIC 1
#define REPORT_EXCEPTION 2
#define REPORT_PLATFORM_CODE 3
#define REPORT_USER_PANIC 4
#define REPORT_TIMEOUT 5
#define FONT_TYPE_SERIF 0
#define FONT_TYPE_SANS_SERIF 1
#define FONT_TYPE_MONOSPACE 2
#define FONT_STYLE_NORMAL 0
#define FONT_STYLE_BOLD 1
#define FONT_STYLE_ITALIC 2
#define RES_FONT_OK 1
#define RES_FONT_INVALID_HANDLE -1
#define RES_FONT_INDEX_OUT_OF_BOUNDS -2
#define RES_FONT_NO_TYPE_STYLE_COMBINATION -3
#define RES_FONT_NAME_NONEXISTENT -4
#define RES_FONT_LIST_NOT_INITIALIZED -5
#define RES_FONT_INSUFFICIENT_BUFFER -6
#define RES_FONT_INVALID_SIZE -7
#define RES_FONT_DELETE_DENIED -8
#define MA_LOC_NONE 1
#define MA_LOC_INVALID 2
#define MA_LOC_UNQUALIFIED 3
#define MA_LOC_QUALIFIED 4
#define MA_LPS_AVAILABLE 1
#define MA_LPS_TEMPORARILY_UNAVAILABLE 2
#define MA_LPS_OUT_OF_SERVICE 3
#define MA_ACCESS_READ 1
#define MA_ACCESS_READ_WRITE 3
#define MA_SEEK_SET 0
#define MA_SEEK_CUR 1
#define MA_SEEK_END 2
#define MA_FERR_GENERIC -2
#define MA_FERR_NOTFOUND -3
#define MA_FERR_FORBIDDEN -4
#define MA_FERR_RENAME_FILESYSTEM -5
#define MA_FERR_RENAME_DIRECTORY -6
#define MA_FERR_WRONG_TYPE -7
#define MA_SMS_RESULT_SENT 1
#define MA_SMS_RESULT_NOT_SENT 2
#define MA_SMS_RESULT_DELIVERED 3
#define MA_SMS_RESULT_NOT_DELIVERED 4
#define MA_CAMERA_CONST_BACK_CAMERA 0
#define MA_CAMERA_CONST_FRONT_CAMERA 1
#define MA_CAMERA_RES_OK 1
#define MA_CAMERA_RES_FAILED -2
#define MA_CAMERA_RES_NOT_STARTED -3
#define MA_CAMERA_RES_PROPERTY_NOTSUPPORTED -4
#define MA_CAMERA_RES_INVALID_PROPERTY_VALUE -5
#define MA_CAMERA_RES_VALUE_NOTSUPPORTED -6
#define MA_CAMERA_FLASH_ON "on"
#define MA_CAMERA_FLASH_AUTO "auto"
#define MA_CAMERA_FLASH_OFF "off"
#define MA_CAMERA_FLASH_TORCH "torch"
#define MA_CAMERA_FOCUS_AUTO "auto"
#define MA_CAMERA_FOCUS_INFINITY "infinity"
#define MA_CAMERA_FOCUS_MACRO "macro"
#define MA_CAMERA_FOCUS_FIXED "fixed"
#define MA_CAMERA_IMAGE_JPEG "jpeg"
#define MA_CAMERA_IMAGE_RAW "raw"
#define MA_CAMERA_FLASH_MODE "flash-mode"
#define MA_CAMERA_FOCUS_MODE "focus-mode"
#define MA_CAMERA_IMAGE_FORMAT "image-format"
#define MA_CAMERA_ZOOM "zoom"
#define MA_CAMERA_MAX_ZOOM "max-zoom"
#define MA_CAMERA_ZOOM_SUPPORTED "zoom-supported"
#define MA_CAMERA_FLASH_SUPPORTED "flash-supported"
#define MA_TB_TYPE_ANY 0
#define MA_TB_TYPE_EMAILADDR 1
#define MA_TB_TYPE_NUMERIC 2
#define MA_TB_TYPE_PHONENUMBER 3
#define MA_TB_TYPE_URL 4
#define MA_TB_TYPE_DECIMAL 5
#define MA_TB_RES_OK 1
#define MA_TB_RES_CANCEL 2
#define MA_TB_FLAG_PASSWORD 0x1000
#define MA_TB_FLAG_UNEDITABLE 0x2000
#define MA_TB_FLAG_SENSITIVE 0x4000
#define MA_TB_FLAG_NON_PREDICTIVE 0x8000
#define MA_TB_FLAG_INITIAL_CAPS_WORD 0x10000
#define MA_TB_FLAG_INITIAL_CAPS_SENTENCE 0x20000
#define NOTIFICATION_TYPE_APPLICATION_LAUNCHER 1
#define SCREEN_ORIENTATION_LANDSCAPE 1
#define SCREEN_ORIENTATION_PORTRAIT 2
#define SCREEN_ORIENTATION_DYNAMIC 3
#define SENSOR_TYPE_ACCELEROMETER 1
#define SENSOR_TYPE_MAGNETIC_FIELD 2
#define SENSOR_TYPE_ORIENTATION 3
#define SENSOR_TYPE_GYROSCOPE 4
#define SENSOR_TYPE_PROXIMITY 5
#define SENSOR_RATE_FASTEST 0
#define SENSOR_RATE_GAME -1
#define SENSOR_RATE_NORMAL -2
#define SENSOR_RATE_UI -3
#define SENSOR_ERROR_NONE 0
#define SENSOR_ERROR_NOT_AVAILABLE -1
#define SENSOR_ERROR_INTERVAL_NOT_SET -2
#define SENSOR_ERROR_ALREADY_ENABLED -3
#define SENSOR_ERROR_NOT_ENABLED -4
#define SENSOR_ERROR_CANNOT_DISABLE -5
#define UIDEVICE_ORIENTATION_UNKNOWN 0
#define UIDEVICE_ORIENTATION_PORTRAIT 1
#define UIDEVICE_ORIENTATION_PORTRAIT_UPSIDE_DOWN 2
#define UIDEVICE_ORIENTATION_LANDSCAPE_LEFT 3
#define UIDEVICE_ORIENTATION_LANDSCAPE_RIGHT 4
#define UIDEVICE_ORIENTATION_FACE_UP 5
#define UIDEVICE_ORIENTATION_FACE_DOWN 6
#define SENSOR_PROXIMITY_VALUE_FAR 0
#define SENSOR_PROXIMITY_VALUE_NEAR 1
#define IOCTL_UNAVAILABLE -1
//End of defines.
int maCheckInterfaceVersion(int hash);
void maExit(int result);
void maPanic(int result, const char* message);
void* memset(void* dst, int val, ulong size);
void* memcpy(void* dst, const void* src, ulong size);
int strcmp(const char* str1, const char* str2);
char* strcpy(char* dst, const char* src);
double __adddf3(double a, double b);
double __subdf3(double a, double b);
double __muldf3(double a, double b);
double __divdf3(double a, double b);
double __negdf2(double a);
int __fixdfsi(double a);
uint __fixunsdfsi(double a);
double __floatsidf(int a);
double __extendsfdf2(float a);
int dcmp(double a, double b);
float __addsf3(float a, float b);
float __subsf3(float a, float b);
float __mulsf3(float a, float b);
float __divsf3(float a, float b);
float __negsf2(float a);
int __fixsfsi(float a);
uint __fixunssfsi(float a);
float __floatsisf(int a);
float __truncdfsf2(double a);
int fcmp(float a, float b);
double sin(double x);
double cos(double x);
double tan(double x);
double sqrt(double x);
int maSetColor(int rgb);
void maSetClipRect(int left, int top, int width, int height);
void maGetClipRect(MARect* out);
void maPlot(int posX, int posY);
void maLine(int startX, int startY, int endX, int endY);
void maFillRect(int left, int top, int width, int height);
void maFillTriangleStrip(const MAPoint2d* points, int count);
void maFillTriangleFan(const MAPoint2d* points, int count);
MAExtent maGetTextSize(const char* str);
MAExtent maGetTextSizeW(const wchar* str);
void maDrawText(int left, int top, const char* str);
void maDrawTextW(int left, int top, const wchar* str);
void maUpdateScreen(void);
void maResetBacklight(void);
MAExtent maGetScrSize(void);
void maDrawImage(MAHandle image, int left, int top);
void maDrawRGB(const MAPoint2d* dstPoint, const void* src, const MARect* srcRect, int scanlength);
void maDrawImageRegion(MAHandle image, const MARect* srcRect, const MAPoint2d* dstPoint, int transformMode);
MAExtent maGetImageSize(MAHandle image);
void maGetImageData(MAHandle image, void* dst, const MARect* srcRect, int scanlength);
MAHandle maSetDrawTarget(MAHandle image);
int maFindLabel(const char* name);
int maCreateImageFromData(MAHandle placeholder, MAHandle data, int offset, int size);
int maCreateImageRaw(MAHandle placeholder, const void* src, MAExtent size, int alpha);
int maCreateDrawableImage(MAHandle placeholder, int width, int height);
int maCreateData(MAHandle placeholder, int size);
MAHandle maCreatePlaceholder(void);
void maDestroyObject(MAHandle handle);
int maGetDataSize(MAHandle data);
void maReadData(MAHandle data, void* dst, int offset, int size);
void maWriteData(MAHandle data, const void* src, int offset, int size);
void maCopyData(const MACopyData* params);
MAHandle maOpenStore(const char* name, int flags);
int maWriteStore(MAHandle store, MAHandle data);
int maReadStore(MAHandle store, MAHandle placeholder);
void maCloseStore(MAHandle store, int _delete);
MAHandle maConnect(const char* url);
void maConnClose(MAHandle conn);
void maConnRead(MAHandle conn, void* dst, int size);
void maConnWrite(MAHandle conn, const void* src, int size);
void maConnReadToData(MAHandle conn, MAHandle data, int offset, int size);
void maConnWriteFromData(MAHandle conn, MAHandle data, int offset, int size);
int maConnGetAddr(MAHandle conn, MAConnAddr* addr);
MAHandle maHttpCreate(const char* url, int method);
void maHttpSetRequestHeader(MAHandle conn, const char* key, const char* value);
int maHttpGetResponseHeader(MAHandle conn, const char* key, char* buffer, int bufSize);
void maHttpFinish(MAHandle conn);
int maLoadResources(MAHandle data);
void maLoadProgram(MAHandle data, int reload);
int maGetKeys(void);
int maGetEvent(MAEvent* event);
void maWait(int timeout);
int maTime(void);
int maLocalTime(void);
int maGetMilliSecondCount(void);
int maFreeObjectMemory(void);
int maTotalObjectMemory(void);
int maVibrate(int ms);
int maSoundPlay(MAHandle sound_res, int offset, int size);
void maSoundStop(void);
int maSoundIsPlaying(void);
int maSoundGetVolume(void);
void maSoundSetVolume(int vol);
// longlong maInvokeExtension(int function, int a, int b, int c MA_IOCTL_ELLIPSIS);
// End of header functions.
MAHandle maFontLoadDefault(int type, int style, int size);
MAHandle maFontSetCurrent(MAHandle font);
int maFontGetCount(void);
int maFontGetName(int index, char* buffer, int bufferLen);
MAHandle maFontLoadWithName(const char* postScriptName, int size);
int maFontDelete(MAHandle font);
int maReportCallStack(void);
int maDumpCallStackEx(const char* str, int data);
void maProtectMemory(const void* /* void* */ start, int length);
void maUnprotectMemory(const void* /* void* */ start, int length);
void maSetMemoryProtection(int enable);
int maGetMemoryProtection(void);
int maGetBatteryCharge(void);
int maLockKeypad(void);
int maUnlockKeypad(void);
int maKeypadIsLocked(void);
int maWriteLog(const void* /* void* */ src, int size);
int maBtStartDeviceDiscovery(int names);
int maBtGetNewDevice(void* /* MABtDevice* */ d);
int maBtStartServiceDiscovery(const void* /* MABtAddr* */ address, const void* /* MAUUID* */ uuid);
int maBtGetNextServiceSize(void* /* MABtServiceSize* */ dst);
int maBtGetNewService(void* /* MABtService* */ dst);
int maBtCancelDiscovery(void);
int maLocationStart(void);
int maLocationStop(void);
int maPlatformRequest(const char* url);
MAHandle maFileOpen(const char* path, int mode);
int maFileExists(MAHandle file);
int maFileClose(MAHandle file);
int maFileCreate(MAHandle file);
int maFileDelete(MAHandle file);
int maFileSize(MAHandle file);
int maFileAvailableSpace(MAHandle file);
int maFileTotalSpace(MAHandle file);
int maFileDate(MAHandle file);
int maFileRename(MAHandle file, const char* newName);
int maFileTruncate(MAHandle file, int offset);
int maFileWrite(MAHandle file, const void* /* void* */ src, int len);
int maFileWriteFromData(MAHandle file, MAHandle data, int offset, int len);
int maFileRead(MAHandle file, void* /* void* */ dst, int len);
int maFileReadToData(MAHandle file, MAHandle data, int offset, int len);
int maFileTell(MAHandle file);
int maFileSeek(MAHandle file, int offset, int whence);
MAHandle maFileListStart(const char* path, const char* filter);
int maFileListNext(MAHandle list, char* nameBuf, int bufSize);
int maFileListClose(MAHandle list);
int maSendTextSMS(const char* dst, const char* msg);
int maFrameBufferGetInfo(void* /* MAFrameBufferInfo* */ info);
int maFrameBufferInit(const void* /* void* */ data);
int maFrameBufferClose(void);
int maAccept(MAHandle serv);
int maSendToBackground(void);
int maBringToForeground(void);
int maGetSystemProperty(const char* key, char* buf, int size);
int maCameraFormatNumber(void);
int maCameraFormat(int index, void* /* MA_CAMERA_FORMAT* */ fmt);
int maCameraStart(void);
int maCameraStop(void);
int maCameraSetPreview(MAHandle widgetHandle);
int maCameraSelect(int cameraNumber);
int maCameraNumber(void);
int maCameraSnapshot(int formatIndex, MAHandle placeholder);
int maCameraRecord(int stopStartFlag);
int maCameraSetProperty(const char* property, const char* value);
int maCameraGetProperty(const char* property, char* value, int bufSize);
int maShowVirtualKeyboard(void);
int maTextBox(const void* /* wchar* */ title, const void* /* wchar* */ inText, void* /* wchar* */ outText, int maxSize, int constraints);
int maKeyCaptureStart(int keyCode);
int maKeyCaptureStop(void);
int maHomeScreenEventsOn(void);
int maHomeScreenEventsOff(void);
int maHomeScreenShortcutAdd(const char* name);
int maHomeScreenShortcutRemove(const char* name);
int maNotificationAdd(int type, int id, const char* title, const char* text);
int maNotificationRemove(int id);
int maScreenSetOrientation(int orientation);
int maScreenSetFullscreen(int fullscreen);
int maScreenStateEventsOn(void);
int maScreenStateEventsOff(void);
void maReportResourceInformation(void);
void maMessageBox(const char* title, const char* message);
void maImagePickerOpen(void);
int maSensorStart(int sensor, int interval);
int maSensorStop(int sensor);
// End of IOCtls.
typedef signed char khronos_int8_t;
typedef unsigned char khronos_uint8_t;
typedef short int khronos_int16_t;
typedef short unsigned int khronos_uint16_t;
typedef long int khronos_intptr_t;
typedef long unsigned int khronos_uintptr_t;
typedef long int khronos_ssize_t;
typedef long unsigned int khronos_usize_t;
typedef int khronos_int32_t;
typedef unsigned int khronos_uint32_t;
typedef long long int khronos_int64_t;
typedef long long unsigned int khronos_uint64_t;
typedef float khronos_float_t;
typedef khronos_uint64_t khronos_utime_nanoseconds_t;
typedef khronos_int64_t khronos_stime_nanoseconds_t;
typedef void GLvoid;
typedef char GLchar;
typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef khronos_int8_t GLbyte;
typedef short int GLshort;
typedef int GLint;
typedef int GLsizei;
typedef khronos_uint8_t GLubyte;
typedef short unsigned int GLushort;
typedef unsigned int GLuint;
typedef khronos_int32_t GLclampx;
typedef khronos_float_t GLfloat;
typedef khronos_float_t GLclampf;
typedef khronos_int32_t GLfixed;
typedef khronos_intptr_t GLintptr;
typedef khronos_ssize_t GLsizeiptr;
// End of typedefs.
#define MA_GL_TEX_IMAGE_2D_OK 0
#define MA_GL_TEX_IMAGE_2D_INVALID_IMAGE -2
#define MA_GL_API_GL2 0
#define MA_GL_API_GL1 1
#define MA_GL_INIT_RES_OK 0
#define MA_GL_INIT_RES_UNAVAILABLE_API -2
#define MA_GL_INIT_RES_ERROR -3
//End of defines.
int maOpenGLInitFullscreen(int glApi);
int maOpenGLCloseFullscreen(void);
int maOpenGLTexImage2D(MAHandle image);
int maOpenGLTexSubImage2D(MAHandle image);
void glActiveTexture(GLenum texture);
void glBindBuffer(GLenum target, GLuint buffer);
void glBindTexture(GLenum target, GLuint texture);
void glBlendFunc(GLenum sfactor, GLenum dfactor);
void glBufferData(GLenum target, GLsizeiptr size, const void* /* void* */ data, GLenum usage);
void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void* /* void* */ data);
void glClear(GLbitfield mask);
void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void glClearDepthf(GLclampf depth);
void glClearStencil(GLint s);
void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* /* void* */ data);
void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* /* void* */ data);
void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void glCullFace(GLenum mode);
void glDeleteBuffers(GLsizei n, const void* /* GLuint* */ buffers);
void glDeleteTextures(GLsizei n, const void* /* GLuint* */ textures);
void glDepthFunc(GLenum func);
void glDepthMask(GLboolean flag);
void glDepthRangef(GLclampf zNear, GLclampf zFar);
void glDisable(GLenum cap);
void glDrawArrays(GLenum mode, GLint first, GLsizei count);
void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void* /* void* */ indices);
void glEnable(GLenum cap);
void glFinish(void);
void glFlush(void);
void glFrontFace(GLenum mode);
void glGenBuffers(GLsizei n, GLuint* buffers);
void glGenTextures(GLsizei n, GLuint* textures);
void glGetBooleanv(GLenum pname, GLboolean* params);
void glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params);
GLenum glGetError(void);
void glGetFloatv(GLenum pname, GLfloat* params);
void glGetIntegerv(GLenum pname, GLint* params);
MAHandle glGetStringHandle(GLenum name);
void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params);
void glGetTexParameteriv(GLenum target, GLenum pname, GLint* params);
void glHint(GLenum target, GLenum mode);
GLboolean glIsBuffer(GLuint buffer);
GLboolean glIsEnabled(GLenum cap);
GLboolean glIsTexture(GLuint texture);
void glLineWidth(GLfloat width);
void glPixelStorei(GLenum pname, GLint param);
void glPolygonOffset(GLfloat factor, GLfloat units);
void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* /* void* */ pixels);
void glSampleCoverage(GLclampf value, GLboolean invert);
void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
void glStencilFunc(GLenum func, GLint ref, GLuint mask);
void glStencilMask(GLuint mask);
void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* /* void* */ pixels);
void glTexParameterf(GLenum target, GLenum pname, GLfloat param);
void glTexParameterfv(GLenum target, GLenum pname, const void* /* GLfloat* */ params);
void glTexParameteri(GLenum target, GLenum pname, GLint param);
void glTexParameteriv(GLenum target, GLenum pname, const void* /* GLint* */ params);
void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* /* void* */ pixels);
void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
// End of IOCtls.
typedef int MAWidgetHandle;
// End of typedefs.
#define MAW_EVENT_POINTER_PRESSED 2
#define MAW_EVENT_POINTER_RELEASED 3
#define MAW_EVENT_CONTENT_LOADED 4
#define MAW_EVENT_CLICKED 5
#define MAW_EVENT_ITEM_CLICKED 6
#define MAW_EVENT_TAB_CHANGED 7
#define MAW_EVENT_GL_VIEW_READY 8
#define MAW_EVENT_WEB_VIEW_URL_CHANGED 9
#define MAW_EVENT_STACK_SCREEN_POPPED 10
#define MAW_EVENT_SLIDER_VALUE_CHANGED 11
#define MAW_EVENT_DATE_PICKER_VALUE_CHANGED 12
#define MAW_EVENT_TIME_PICKER_VALUE_CHANGED 13
#define MAW_EVENT_NUMBER_PICKER_VALUE_CHANGED 14
#define MAW_EVENT_VIDEO_STATE_CHANGED 15
#define MAW_EVENT_EDIT_BOX_EDITING_DID_BEGIN 16
#define MAW_EVENT_EDIT_BOX_EDITING_DID_END 17
#define MAW_EVENT_EDIT_BOX_TEXT_CHANGED 18
#define MAW_EVENT_EDIT_BOX_RETURN 19
#define MAW_EVENT_WEB_VIEW_CONTENT_LOADING 20
#define MAW_EVENT_WEB_VIEW_HOOK_INVOKED 21
#define MAW_CONSTANT_MOSYNC_SCREEN_HANDLE 0
#define MAW_CONSTANT_FILL_AVAILABLE_SPACE -1
#define MAW_CONSTANT_WRAP_CONTENT -2
#define MAW_CONSTANT_STARTED 1
#define MAW_CONSTANT_DONE 2
#define MAW_CONSTANT_STOPPED 3
#define MAW_CONSTANT_ERROR -1
#define MAW_CONSTANT_SOFT 5
#define MAW_CONSTANT_HARD 6
#define MAW_ALIGNMENT_LEFT "left"
#define MAW_ALIGNMENT_RIGHT "right"
#define MAW_ALIGNMENT_CENTER "center"
#define MAW_ALIGNMENT_TOP "top"
#define MAW_ALIGNMENT_BOTTOM "bottom"
#define MAW_VIDEO_VIEW_ACTION_PLAY 1
#define MAW_VIDEO_VIEW_ACTION_PAUSE 2
#define MAW_VIDEO_VIEW_ACTION_STOP 3
#define MAW_VIDEO_VIEW_STATE_PLAYING 1
#define MAW_VIDEO_VIEW_STATE_PAUSED 2
#define MAW_VIDEO_VIEW_STATE_STOPPED 3
#define MAW_VIDEO_VIEW_STATE_FINISHED 4
#define MAW_VIDEO_VIEW_STATE_SOURCE_READY 5
#define MAW_VIDEO_VIEW_STATE_INTERRUPTED 6
#define MAW_RES_OK 0
#define MAW_RES_ERROR -2
#define MAW_RES_INVALID_PROPERTY_NAME -2
#define MAW_RES_INVALID_PROPERTY_VALUE -3
#define MAW_RES_INVALID_HANDLE -4
#define MAW_RES_INVALID_TYPE_NAME -5
#define MAW_RES_INVALID_INDEX -6
#define MAW_RES_INVALID_STRING_BUFFER_SIZE -7
#define MAW_RES_INVALID_SCREEN -8
#define MAW_RES_INVALID_LAYOUT -9
#define MAW_RES_REMOVED_ROOT -10
#define MAW_RES_FEATURE_NOT_AVAILABLE -11
#define MAW_SCREEN "Screen"
#define MAW_TAB_SCREEN "TabScreen"
#define MAW_STACK_SCREEN "StackScreen"
#define MAW_BUTTON "Button"
#define MAW_IMAGE "Image"
#define MAW_IMAGE_BUTTON "ImageButton"
#define MAW_LABEL "Label"
#define MAW_EDIT_BOX "EditBox"
#define MAW_LIST_VIEW "ListView"
#define MAW_LIST_VIEW_ITEM "ListViewItem"
#define MAW_CHECK_BOX "CheckBox"
#define MAW_HORIZONTAL_LAYOUT "HorizontalLayout"
#define MAW_VERTICAL_LAYOUT "VerticalLayout"
#define MAW_RELATIVE_LAYOUT "RelativeLayout"
#define MAW_SEARCH_BAR "SearchBar"
#define MAW_NAV_BAR "NavBar"
#define MAW_GL_VIEW "GLView"
#define MAW_GL2_VIEW "GL2View"
#define MAW_CAMERA_PREVIEW "CameraPreview"
#define MAW_WEB_VIEW "WebView"
#define MAW_PROGRESS_BAR "ProgressBar"
#define MAW_ACTIVITY_INDICATOR "ActivityIndicator"
#define MAW_SLIDER "Slider"
#define MAW_DATE_PICKER "DatePicker"
#define MAW_TIME_PICKER "TimePicker"
#define MAW_NUMBER_PICKER "NumberPicker"
#define MAW_VIDEO_VIEW "VideoView"
#define MAW_TOGGLE_BUTTON "ToggleButton"
#define MAW_WIDGET_LEFT "left"
#define MAW_WIDGET_TOP "top"
#define MAW_WIDGET_WIDTH "width"
#define MAW_WIDGET_HEIGHT "height"
#define MAW_WIDGET_ALPHA "alpha"
#define MAW_WIDGET_BACKGROUND_COLOR "backgroundColor"
#define MAW_WIDGET_VISIBLE "visible"
#define MAW_WIDGET_ENABLED "enabled"
#define MAW_WIDGET_BACKGROUND_GRADIENT "backgroundGradient"
#define MAW_SCREEN_TITLE "title"
#define MAW_SCREEN_ICON "icon"
#define MAW_TAB_SCREEN_TITLE "title"
#define MAW_TAB_SCREEN_ICON "icon"
#define MAW_TAB_SCREEN_CURRENT_TAB "currentTab"
#define MAW_STACK_SCREEN_TITLE "title"
#define MAW_STACK_SCREEN_ICON "icon"
#define MAW_STACK_SCREEN_BACK_BUTTON_ENABLED "backButtonEnabled"
#define MAW_LABEL_TEXT "text"
#define MAW_LABEL_TEXT_VERTICAL_ALIGNMENT "textVerticalAlignment"
#define MAW_LABEL_TEXT_HORIZONTAL_ALIGNMENT "textHorizontalAlignment"
#define MAW_LABEL_FONT_COLOR "fontColor"
#define MAW_LABEL_FONT_SIZE "fontSize"
#define MAW_LABEL_FONT_HANDLE "fontHandle"
#define MAW_LABEL_MAX_NUMBER_OF_LINES "maxNumberOfLines"
#define MAW_BUTTON_TEXT "text"
#define MAW_BUTTON_TEXT_VERTICAL_ALIGNMENT "textVerticalAlignment"
#define MAW_BUTTON_TEXT_HORIZONTAL_ALIGNMENT "textHorizontalAlignment"
#define MAW_BUTTON_FONT_COLOR "fontColor"
#define MAW_BUTTON_FONT_SIZE "fontSize"
#define MAW_BUTTON_FONT_HANDLE "fontHandle"
#define MAW_IMAGE_BUTTON_TEXT "text"
#define MAW_IMAGE_BUTTON_TEXT_VERTICAL_ALIGNMENT "textVerticalAlignment"
#define MAW_IMAGE_BUTTON_TEXT_HORIZONTAL_ALIGNMENT "textHorizontalAlignment"
#define MAW_IMAGE_BUTTON_FONT_COLOR "fontColor"
#define MAW_IMAGE_BUTTON_FONT_SIZE "fontSize"
#define MAW_IMAGE_BUTTON_BACKGROUND_IMAGE "backgroundImage"
#define MAW_IMAGE_BUTTON_IMAGE "image"
#define MAW_IMAGE_BUTTON_FONT_HANDLE "fontHandle"
#define MAW_IMAGE_IMAGE "image"
#define MAW_IMAGE_SCALE_MODE "scaleMode"
#define MAW_EDIT_BOX_TEXT "text"
#define MAW_EDIT_BOX_PLACEHOLDER "placeholder"
#define MAW_EDIT_BOX_SHOW_KEYBOARD "showKeyboard"
#define MAW_EDIT_BOX_EDIT_MODE "editMode"
#define MAW_LIST_VIEW_ITEM_TEXT "text"
#define MAW_LIST_VIEW_ITEM_ICON "icon"
#define MAW_LIST_VIEW_ITEM_ACCESSORY_TYPE "accessoryType"
#define MAW_LIST_VIEW_ITEM_FONT_HANDLE "fontHandle"
#define MAW_CHECK_BOX_CHECKED "checked"
#define MAW_TOGGLE_BUTTON_CHECKED "checked"
#define MAW_HORIZONTAL_LAYOUT_CHILD_VERTICAL_ALIGNMENT "childVerticalAlignment"
#define MAW_HORIZONTAL_LAYOUT_CHILD_HORIZONTAL_ALIGNMENT "childHorizontalAlignment"
#define MAW_VERTICAL_LAYOUT_CHILD_VERTICAL_ALIGNMENT "childVerticalAlignment"
#define MAW_VERTICAL_LAYOUT_CHILD_HORIZONTAL_ALIGNMENT "childHorizontalAlignment"
#define MAW_SEARCH_BAR_TEXT "text"
#define MAW_SEARCH_BAR_PLACEHOLDER "placeholder"
#define MAW_SEARCH_BAR_SHOW_KEYBOARD "showKeyboard"
#define MAW_GL_VIEW_INVALIDATE "invalidate"
#define MAW_GL_VIEW_BIND "bind"
#define MAW_WEB_VIEW_URL "url"
#define MAW_WEB_VIEW_HTML "html"
#define MAW_WEB_VIEW_BASE_URL "baseUrl"
#define MAW_WEB_VIEW_SOFT_HOOK "softHook"
#define MAW_WEB_VIEW_HARD_HOOK "hardHook"
#define MAW_WEB_VIEW_NEW_URL "newurl"
#define MAW_WEB_VIEW_HORIZONTAL_SCROLL_BAR_ENABLED "horizontalScrollBarEnabled"
#define MAW_WEB_VIEW_VERTICAL_SCROLL_BAR_ENABLED "verticalScrollBarEnabled"
#define MAW_WEB_VIEW_ENABLE_ZOOM "enableZoom"
#define MAW_WEB_VIEW_NAVIGATE "navigate"
#define MAW_PROGRESS_BAR_MAX "max"
#define MAW_PROGRESS_BAR_PROGRESS "progress"
#define MAW_PROGRESS_BAR_INCREMENT_PROGRESS "incrementProgress"
#define MAW_ACTIVITY_INDICATOR_IN_PROGRESS "inProgress"
#define MAW_SLIDER_MAX "max"
#define MAW_SLIDER_VALUE "value"
#define MAW_SLIDER_INCREASE_VALUE "increaseValue"
#define MAW_SLIDER_DECREASE_VALUE "decreaseValue"
#define MAW_DATE_PICKER_MAX_DATE "maxDate"
#define MAW_DATE_PICKER_MIN_DATE "minDate"
#define MAW_DATE_PICKER_YEAR "year"
#define MAW_DATE_PICKER_MONTH "month"
#define MAW_DATE_PICKER_DAY_OF_MONTH "dayOfMonth"
#define MAW_TIME_PICKER_CURRENT_HOUR "currentHour"
#define MAW_TIME_PICKER_CURRENT_MINUTE "currentMinute"
#define MAW_NUMBER_PICKER_VALUE "value"
#define MAW_NUMBER_PICKER_MIN_VALUE "minValue"
#define MAW_NUMBER_PICKER_MAX_VALUE "maxValue"
#define MAW_VIDEO_VIEW_PATH "path"
#define MAW_VIDEO_VIEW_URL "url"
#define MAW_VIDEO_VIEW_ACTION "action"
#define MAW_VIDEO_VIEW_SEEK_TO "seekTo"
#define MAW_VIDEO_VIEW_DURATION "duration"
#define MAW_VIDEO_VIEW_BUFFER_PERCENTAGE "bufferPercentage"
#define MAW_VIDEO_VIEW_CURRENT_POSITION "currentPosition"
#define MAW_NAV_BAR_TITLE "title"
#define MAW_NAV_BAR_BACK_BTN "backBtn"
#define MAW_NAV_BAR_COLOR "color"
//End of defines.
MAWidgetHandle maWidgetCreate(const char* widgetType);
int maWidgetDestroy(MAWidgetHandle widget);
int maWidgetAddChild(MAWidgetHandle parent, MAWidgetHandle child);
int maWidgetInsertChild(MAWidgetHandle parent, MAWidgetHandle child, int index);
int maWidgetRemoveChild(MAWidgetHandle child);
int maWidgetScreenShow(MAWidgetHandle screenHandle);
int maWidgetStackScreenPush(MAWidgetHandle stackScreen, MAWidgetHandle newScreen);
int maWidgetStackScreenPop(MAWidgetHandle stackScreen);
int maWidgetSetProperty(MAWidgetHandle widget, const char* property, const char* value);
int maWidgetGetProperty(MAWidgetHandle widget, const char* property, char* value, int bufSize);
// End of IOCtls.
