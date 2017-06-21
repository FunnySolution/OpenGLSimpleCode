#version 440 core
in vec3 ourColor;
in vec2 TexCoord;
out vec4 FragColor;

uniform sampler2D ourTexture1;
uniform sampler2D ourTexture2;

void main()
{
    FragColor = texture(ourTexture1, TexCoord) * texture(ourTexture2, TexCoord);
}