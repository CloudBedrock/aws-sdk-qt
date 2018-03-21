/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletecustomverificationemailtemplateresponse.h"
#include "deletecustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  DeleteCustomVerificationEmailTemplateResponse
 *
 * @brief  Handles SES DeleteCustomVerificationEmailTemplate responses.
 *
 * @see    SESClient::deleteCustomVerificationEmailTemplate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCustomVerificationEmailTemplateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteCustomVerificationEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomVerificationEmailTemplateRequest(request));
    setReply(reply);
}

const DeleteCustomVerificationEmailTemplateRequest * DeleteCustomVerificationEmailTemplateResponse::request() const
{
    Q_D(const DeleteCustomVerificationEmailTemplateResponse);
    return static_cast<const DeleteCustomVerificationEmailTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a SES DeleteCustomVerificationEmailTemplate response.
 *
 * @param  response  Response to parse.
 */
void DeleteCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCustomVerificationEmailTemplateResponsePrivate
 *
 * @brief  Private implementation for DeleteCustomVerificationEmailTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCustomVerificationEmailTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCustomVerificationEmailTemplateResponse instance.
 */
DeleteCustomVerificationEmailTemplateResponsePrivate::DeleteCustomVerificationEmailTemplateResponsePrivate(
    DeleteCustomVerificationEmailTemplateQueueResponse * const q) : DeleteCustomVerificationEmailTemplatePrivate(q)
{

}

/**
 * @brief  Parse an SES DeleteCustomVerificationEmailTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCustomVerificationEmailTemplateResponsePrivate::DeleteCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomVerificationEmailTemplateResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
