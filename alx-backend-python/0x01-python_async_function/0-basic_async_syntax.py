#!/usr/bin/env python3
"""
wailt_random module
"""

import random
import asyncio


async def wait_random(max_delay: int = 10) -> float:
    """sleeps for max_delay seconds

    Args:
        max_delay (int, optional): _description_. Defaults to 10.

    Returns:
        _type_: float
    """
    delay = random.random() * max_delay
    await asyncio.sleep(delay)
    return delay
