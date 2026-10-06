def get_virtual_try_on_prompt(outfit_parts: list) -> str:
    """
    Returns the system prompt for the virtual try-on model based on the selected outfit parts.
    outfit_parts is a list of descriptions like "Top", "Bottom", "Footwear".
    """
    
    has_bottom = "Bottom" in outfit_parts
    has_dress = "Dress" in outfit_parts
    
    prompt = (
        "You are an expert AI performing a highly realistic virtual try-on transformation. "
        "I am providing you with multiple reference images:\n"
        "Image 1 is the reference photo of the user.\n"
        "The remaining images are reference images of the exact clothing items the user wants to try on.\n\n"
        "Your task:\n"
        "Dress the person in Image 1 using the exact clothing items shown in the reference clothing images. "
        "Preserve the user's identity, facial appearance, hairstyle, skin tone, body proportions, and overall recognizable appearance perfectly. "
        "Do not change the user's identity or generate a completely different person.\n\n"
        "Clothing Fidelity Requirements:\n"
        "- Preserve the exact color, pattern, texture, material appearance, and visible details of the provided clothing images.\n"
        "- Preserve the shape, cut, design, and relative proportions of the clothing items.\n"
        "- Do not replace the clothing with a similar-looking item.\n"
        "- Do not invent new clothing items that are not provided in the reference images.\n"
        "- Maintain a natural realistic body pose and realistic clothing fit.\n"
        "- The clothing should follow the person's body naturally with realistic folds, shadows, and occlusion.\n"
        "- Keep the result photorealistic.\n\n"
    )

    if has_dress:
        prompt += (
            "IMPORTANT DRESS RULE: The outfit contains a long dress or one-piece garment. "
            "Do NOT add separate bottomwear (like pants, jeans, trousers, or shorts). The dress covers the bottom half.\n\n"
        )
    elif not has_bottom:
        prompt += (
            "IMPORTANT: There is no bottomwear provided in this outfit combination. "
            "Maintain whatever the user is wearing on their bottom half in Image 1, or leave it natural. Do not invent pants.\n\n"
        )
        
    prompt += "Output exactly ONE final photorealistic image of the user wearing the selected outfit."
    return prompt
