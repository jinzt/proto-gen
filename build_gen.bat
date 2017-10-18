@echo off

::Э���ļ�·��, ���Ҫ����\������
set SOURCE_FOLDER=.\protos

::protoc������·��
set PROTOC_COMPILER_PATH=.\proto_tool\protoc.exe
::protogen������·��
set PROTOCGEN_COMPILER_PATH=.\proto_tool\protogen.exe
::protogenlua������·��
set PROTOCGENLUA_COMPILER_PATH=.\proto_tool\protoc-gen-lua\plugin\protoc-gen-lua.bat

::pb�ļ�����·��, ���Ҫ����\������
set PB_TARGET_PATH=.\out\pb
::Cpp�ļ�����·��, ���Ҫ����\������
set CPP_TARGET_PATH=.\out\cpp 
::Java�ļ�����·��, ���Ҫ����\������
set JAVA_TARGET_PATH=.\out\java 
::C#�ļ�����·��, ���Ҫ����\������
set CS_TARGET_PATH=.\out\cs
::lua�ļ�����·��, ���Ҫ����\������
set LUA_TARGET_PATH=.\out\lua

::ɾ��֮ǰ�������ļ�
rd /s /q %PB_TARGET_PATH%
rd /s /q %CPP_TARGET_PATH%
rd /s /q %JAVA_TARGET_PATH%
rd /s /q %CS_TARGET_PATH%
rd /s /q %LUA_TARGET_PATH%
md %PB_TARGET_PATH%
md %CPP_TARGET_PATH%
md %JAVA_TARGET_PATH%
md %CS_TARGET_PATH%
md %LUA_TARGET_PATH%


::���������ļ�
for /f "delims=" %%i in ('dir /b "%SOURCE_FOLDER%\*.proto"') do (

    ::���� pb �������ļ�
    echo %PROTOC_COMPILER_PATH% -o %PB_TARGET_PATH%\%%~ni.pb %SOURCE_FOLDER%\%%i
    %PROTOC_COMPILER_PATH% -o %PB_TARGET_PATH%\%%~ni.pb %SOURCE_FOLDER%\%%i

    ::���� CPP ����
    echo %PROTOC_COMPILER_PATH% --cpp_out=%CPP_TARGET_PATH% %SOURCE_FOLDER%\%%i
    %PROTOC_COMPILER_PATH% --cpp_out=%CPP_TARGET_PATH% %SOURCE_FOLDER%\%%i
	
    ::���� Java ����
    echo %PROTOC_COMPILER_PATH% --java_out=%JAVA_TARGET_PATH% %SOURCE_FOLDER%\%%i
    %PROTOC_COMPILER_PATH% --java_out=%JAVA_TARGET_PATH% %SOURCE_FOLDER%\%%i
	
    ::���� C# ����
    echo %PROTOCGEN_COMPILER_PATH% --proto_path=%SOURCE_FOLDER% --csharp_out=%CS_TARGET_PATH%\  %%i
    %PROTOCGEN_COMPILER_PATH% --proto_path=%SOURCE_FOLDER% --csharp_out=%CS_TARGET_PATH%\  %%i
	
	::���� lua ����
    echo %PROTOC_COMPILER_PATH% --lua_out=%LUA_TARGET_PATH% --plugin=protoc-gen-lua=%PROTOCGENLUA_COMPILER_PATH% %SOURCE_FOLDER%\%%i
    %PROTOC_COMPILER_PATH% --lua_out=%LUA_TARGET_PATH% --plugin=protoc-gen-lua=%PROTOCGENLUA_COMPILER_PATH% %SOURCE_FOLDER%\%%i
      
)

echo Э��������ϡ�

pause
