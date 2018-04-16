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

#include "cognitoidentityresponse.h"
#include "cognitoidentityresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::CognitoIdentityResponse
 *
 * \brief The CognitoIdentityResponse class provides an interface for CognitoIdentity responses.
 *
 * \ingroup CognitoIdentity
 */

/*!
 * @brief  Constructs a new CognitoIdentityResponse object.
 *
 * @param  parent   This object's parent.
 */
CognitoIdentityResponse::CognitoIdentityResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CognitoIdentityResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CognitoIdentityResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CognitoIdentityResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
CognitoIdentityResponse::CognitoIdentityResponse(CognitoIdentityResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void CognitoIdentityResponse::parseFailure(QIODevice &response)
{
    Q_D(CognitoIdentityResponse);
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
 * @class  CognitoIdentityResponsePrivate
 *
 * @brief  Private implementation for CognitoIdentityResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CognitoIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CognitoIdentityResponse instance.
 */
CognitoIdentityResponsePrivate::CognitoIdentityResponsePrivate(
    CognitoIdentityResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
