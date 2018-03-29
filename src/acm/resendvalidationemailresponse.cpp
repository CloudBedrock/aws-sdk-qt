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

#include "resendvalidationemailresponse.h"
#include "resendvalidationemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/**
 * @class  ResendValidationEmailResponse
 *
 * @brief  Handles ACM ResendValidationEmail responses.
 *
 * @see    ACMClient::resendValidationEmail
 */

/**
 * @brief  Constructs a new ResendValidationEmailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResendValidationEmailResponse::ResendValidationEmailResponse(
        const ResendValidationEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new ResendValidationEmailResponsePrivate(this), parent)
{
    setRequest(new ResendValidationEmailRequest(request));
    setReply(reply);
}

const ResendValidationEmailRequest * ResendValidationEmailResponse::request() const
{
    Q_D(const ResendValidationEmailResponse);
    return static_cast<const ResendValidationEmailRequest *>(d->request);
}

/**
 * @brief  Parse a ACM ResendValidationEmail response.
 *
 * @param  response  Response to parse.
 */
void ResendValidationEmailResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResendValidationEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResendValidationEmailResponsePrivate
 *
 * @brief  Private implementation for ResendValidationEmailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResendValidationEmailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResendValidationEmailResponse instance.
 */
ResendValidationEmailResponsePrivate::ResendValidationEmailResponsePrivate(
    ResendValidationEmailResponse * const q) : ACMResponsePrivate(q)
{

}

/**
 * @brief  Parse an ACM ResendValidationEmailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResendValidationEmailResponsePrivate::parseResendValidationEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResendValidationEmailResponse"));
    /// @todo
}

} // namespace ACM
} // namespace QtAws
