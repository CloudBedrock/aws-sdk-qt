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

#include "listprincipalpoliciesresponse.h"
#include "listprincipalpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListPrincipalPoliciesResponse
 *
 * @brief  Handles IoT ListPrincipalPolicies responses.
 *
 * @see    IoTClient::listPrincipalPolicies
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPrincipalPoliciesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListPrincipalPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListPrincipalPoliciesRequest(request));
    setReply(reply);
}

const ListPrincipalPoliciesRequest * ListPrincipalPoliciesResponse::request() const
{
    Q_D(const ListPrincipalPoliciesResponse);
    return static_cast<const ListPrincipalPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListPrincipalPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListPrincipalPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPrincipalPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListPrincipalPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPrincipalPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPrincipalPoliciesResponse instance.
 */
ListPrincipalPoliciesResponsePrivate::ListPrincipalPoliciesResponsePrivate(
    ListPrincipalPoliciesQueueResponse * const q) : ListPrincipalPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListPrincipalPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPrincipalPoliciesResponsePrivate::ListPrincipalPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPrincipalPoliciesResponse"));
    /// @todo
}
