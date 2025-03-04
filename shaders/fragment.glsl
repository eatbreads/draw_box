#version 330 core

// 从顶点着色器接收的颜色插值
in vec3 fragColor;

// 片段着色器的输出颜色
out vec4 color;

void main() {
    // 将插值后的颜色作为片段的最终颜色，alpha 设为 1.0 (不透明)
    color = vec4(fragColor, 1.0);
}
