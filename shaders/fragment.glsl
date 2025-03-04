#version 330 core

// 从顶点着色器接收的颜色插值
in vec3 fragColor;
in vec2 TexCoord;

uniform sampler2D ourTexture;
// 片段着色器的输出颜色
out vec4 FragColor;

void main() {

    FragColor = texture(ourTexture, TexCoord) * vec4(fragColor, 1.0);
}
