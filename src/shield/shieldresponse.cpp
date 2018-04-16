/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "shieldresponse.h"
#include "shieldresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ShieldResponse
 *
 * \brief The ShieldResponse class provides an interface for Shield responses.
 *
 * \ingroup Shield
 */

/*!
 * @brief  Constructs a new ShieldResponse object.
 *
 * @param  parent   This object's parent.
 */
ShieldResponse::ShieldResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ShieldResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ShieldResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ShieldResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
ShieldResponse::ShieldResponse(ShieldResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void ShieldResponse::parseFailure(QIODevice &response)
{
    Q_D(ShieldResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * @internal
 *
 * @class  ShieldResponsePrivate
 *
 * @brief  Private implementation for ShieldResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ShieldResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ShieldResponse instance.
 */
ShieldResponsePrivate::ShieldResponsePrivate(
    ShieldResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Shield
} // namespace QtAws
