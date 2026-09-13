# Joy Wireframes

![Status](https://img.shields.io/badge/status-final-brightgreen)
![Screens](https://img.shields.io/badge/screens-3-informational)
![Built with](https://img.shields.io/badge/built%20with-HTML%20%26%20CSS-orange)
![License](https://img.shields.io/badge/license-private-red)

## Overview

This repository contains the finished interface prototypes for Joy, a companion platform for private adoption in the United States. Joy is sold to and maintained by adoption attorneys, who provide it to their clients, including adoptive families and birth parents. It is not a legal case-management tool and does not give legal advice. Everything shown is presented as the attorney's vetted guidance.

## Why Joy Exists

Private adoption is long, expensive, and emotionally heavy, and the people going through it are often navigating it for the first time. Families are handed a process full of unfamiliar terms, strict document requirements, and expense rules that vary by state, usually with little more than email and a lawyer they can only reach during office hours. Attorneys, in turn, spend hours answering the same questions, chasing paperwork, and keeping track of where each family stands.

Joy sits between the two. For families, it turns an intimidating legal process into a clear, guided journey that shows them where they are, what comes next, and what each step means in plain language. For attorneys, it reduces repetitive hand-holding and gives them a single place to oversee every case, advance stages, and keep expenses compliant. Because a family that feels supported is a family that refers the firm, Joy also becomes something an attorney can market. The buyer is the attorney; the daily user is the family, and the product is designed to serve both without compromising either.

## Interfaces

| File | Interface | What it covers |
|------|-----------|----------------|
| `joy_family_portal_final.html` | Family portal | The adoptive family's home base. Includes a journey tracker across the adoption stages (home study through finalization), a "coming up" panel, messages, a document checklist, an expense ledger with state-rule guidance, and their public family website with activity stats. |
| `joy_attorney_console_final.html` | Attorney console | The attorney's practice view. Includes families at every stage, open invoices, requests waiting for review, conversations that need a decision, per-family expense plans, and quick actions such as adding a family, logging an expense, or scheduling a meeting. |
| `joy_adoption_companion_v70.html` | Family website builder (8-bit theme) | The family app paired with the website editor, shown in a retro 8-bit game style. Families edit their public adoption website and see a live pixel-art preview as they go, alongside the journey tracker, checklist, and expense views. |

## The Family's Website

A core part of Joy is the public website each adoptive family builds to introduce themselves to prospective birth parents. In private adoption, this family profile is often the first impression a birth parent has, so it matters that families can present themselves warmly and honestly without needing any design or technical skill.

Joy handles this with a built-in website builder. Families edit sections like "who we are" and "home and neighborhood," and a live preview shows exactly how the page will look as they type. The builder in `joy_adoption_companion_v70.html` uses a playful 8-bit, pixel-art game aesthetic, making the act of building an intimidating profile feel approachable and even fun rather than clinical. Back in the family portal, an activity panel shows how the finished site is performing, including which sections people reach and where they click, so families and their attorney can see how the profile is landing.

## About the Screens

Each screen is a single self-contained HTML file with the layout, styling, and sample data built in, so it runs in any browser with no setup. The data shown (families, expenses, messages) is placeholder content used to demonstrate how the interface behaves. The family screens use a warm, plain tone, the website builder leans into its 8-bit game aesthetic, and the attorney console is denser and built for oversight.

## Viewing

Open any `.html` file in a browser.
