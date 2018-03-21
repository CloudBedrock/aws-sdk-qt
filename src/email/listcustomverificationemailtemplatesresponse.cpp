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

#include "listcustomverificationemailtemplatesresponse.h"
#include "listcustomverificationemailtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  ListCustomVerificationEmailTemplatesResponse
 *
 * @brief  Handles SES ListCustomVerificationEmailTemplates responses.
 *
 * @see    SESClient::listCustomVerificationEmailTemplates
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCustomVerificationEmailTemplatesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new ListCustomVerificationEmailTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListCustomVerificationEmailTemplatesRequest(request));
    setReply(reply);
}

const ListCustomVerificationEmailTemplatesRequest * ListCustomVerificationEmailTemplatesResponse::request() const
{
    Q_D(const ListCustomVerificationEmailTemplatesResponse);
    return static_cast<const ListCustomVerificationEmailTemplatesRequest *>(d->request);
}

/**
 * @brief  Parse a SES ListCustomVerificationEmailTemplates response.
 *
 * @param  response  Response to parse.
 */
void ListCustomVerificationEmailTemplatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCustomVerificationEmailTemplatesResponsePrivate
 *
 * @brief  Private implementation for ListCustomVerificationEmailTemplatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCustomVerificationEmailTemplatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCustomVerificationEmailTemplatesResponse instance.
 */
ListCustomVerificationEmailTemplatesResponsePrivate::ListCustomVerificationEmailTemplatesResponsePrivate(
    ListCustomVerificationEmailTemplatesQueueResponse * const q) : ListCustomVerificationEmailTemplatesPrivate(q)
{

}

/**
 * @brief  Parse an SES ListCustomVerificationEmailTemplatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCustomVerificationEmailTemplatesResponsePrivate::ListCustomVerificationEmailTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCustomVerificationEmailTemplatesResponse"));
    /// @todo
}
