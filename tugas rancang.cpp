<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<CodeBlocks_project_file>
	<FileVersion major="1" minor="6" />
	<Project>
		<Option title="tugas tr objek ruangan" />
		<Option pch_mode="2" />
		<Option compiler="gcc" />
		<Build>
			<Target title="Debug">
				<Option output="bin/Debug/tugas tr objek ruangan" prefix_auto="1" extension_auto="1" />
				<Option working_dir="C:/Program Files/CodeBlocks/MinGW/x86_64-w64-mingw32/bin" />
				<Option object_output="obj/Debug/" />
				<Option type="1" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-g" />
				</Compiler>
			</Target>
			<Target title="Release">
				<Option output="bin/Release/tugas tr objek ruangan" prefix_auto="1" extension_auto="1" />
				<Option working_dir="C:/Program Files/CodeBlocks/MinGW/x86_64-w64-mingw32/bin" />
				<Option object_output="obj/Release/" />
				<Option type="0" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-O2" />
				</Compiler>
				<Linker>
					<Add option="-s" />
				</Linker>
			</Target>
		</Build>
		<Compiler>
			<Add option="-Wall" />
			<Add directory="C:/Program Files/CodeBlocks/MinGW/x86_64-w64-mingw32/include" />
		</Compiler>
		<Linker>
			<Add library="freeglut" />
			<Add library="opengl32" />
			<Add library="glu32" />
			<Add library="winmm" />
			<Add library="gdi32" />
			<Add directory="C:/Program Files/CodeBlocks/MinGW/x86_64-w64-mingw32/lib" />
		</Linker>
		<Unit filename="main.cpp" />
		<Extensions>
			<lib_finder disable_auto="1" />
		</Extensions>
	</Project>
</CodeBlocks_project_file>
