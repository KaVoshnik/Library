#ifndef Library_h
#define Library_h

// Base
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <memory>

// files
#include <fstream>
#include <sstream>

// Sockets
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

// Threads
#include <thread>
#include <mutex>
#include <condition_variable>

// JSON
#include <json/json.h>

// Database
#include <sqlite3.h>

// Cryptography
#include <openssl/sha.h>
#include <openssl/aes.h>

// GUI
#include <gtk/gtk.h>

// Graphics
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

// Audio
#include <SDL2/SDL_mixer.h>

// Video
#include <SDL2/SDL_video.h>

// Physics
#include <Box2D/Box2D.h>

// Math
#include <math.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

// Logs
#include <log4cpp/Category.hh>
#include <log4cpp/Appender.hh>
#include <log4cpp/Layout.hh>
#include <log4cpp/Priority.hh>

// Testing
#include <gtest/gtest.h>

#endif // Library_h