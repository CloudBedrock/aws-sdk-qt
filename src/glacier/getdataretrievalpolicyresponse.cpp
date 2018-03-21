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

#include "getdataretrievalpolicyresponse.h"
#include "getdataretrievalpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  GetDataRetrievalPolicyResponse
 *
 * @brief  Handles Glacier GetDataRetrievalPolicy responses.
 *
 * @see    GlacierClient::getDataRetrievalPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDataRetrievalPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new GetDataRetrievalPolicyResponsePrivate(this), parent)
{
    setRequest(new GetDataRetrievalPolicyRequest(request));
    setReply(reply);
}

const GetDataRetrievalPolicyRequest * GetDataRetrievalPolicyResponse::request() const
{
    Q_D(const GetDataRetrievalPolicyResponse);
    return static_cast<const GetDataRetrievalPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier GetDataRetrievalPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetDataRetrievalPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDataRetrievalPolicyResponsePrivate
 *
 * @brief  Private implementation for GetDataRetrievalPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDataRetrievalPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDataRetrievalPolicyResponse instance.
 */
GetDataRetrievalPolicyResponsePrivate::GetDataRetrievalPolicyResponsePrivate(
    GetDataRetrievalPolicyQueueResponse * const q) : GetDataRetrievalPolicyPrivate(q)
{

}

/**
 * @brief  Parse an Glacier GetDataRetrievalPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDataRetrievalPolicyResponsePrivate::GetDataRetrievalPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataRetrievalPolicyResponse"));
    /// @todo
}
