#version 330 core
out vec4 FragColor;

in vec2 TexCoords;

uniform sampler2D texture1;
uniform vec4 textureColor;

void main()
{    
    FragColor = texture(texture1, TexCoords) * textureColor;
}
