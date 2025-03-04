#version 330 core
layout (location = 0) in vec3 position;
layout (location = 1) in vec3 color;
layout(location = 2) in vec2 texCoord;
out vec2 TexCoord;
out vec3 fragColor;

void main() {
    gl_Position = vec4(position, 1.0);
    fragColor = color;
    TexCoord = texCoord;
}
