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

#include "batchgetdeploymentsresponse.h"
#include "batchgetdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  BatchGetDeploymentsResponse
 *
 * @brief  Handles CodeDeploy BatchGetDeployments responses.
 *
 * @see    CodeDeployClient::batchGetDeployments
 */

/**
 * @brief  Constructs a new BatchGetDeploymentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetDeploymentsResponse::BatchGetDeploymentsResponse(
        const BatchGetDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new BatchGetDeploymentsResponsePrivate(this), parent)
{
    setRequest(new BatchGetDeploymentsRequest(request));
    setReply(reply);
}

const BatchGetDeploymentsRequest * BatchGetDeploymentsResponse::request() const
{
    Q_D(const BatchGetDeploymentsResponse);
    return static_cast<const BatchGetDeploymentsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy BatchGetDeployments response.
 *
 * @param  response  Response to parse.
 */
void BatchGetDeploymentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetDeploymentsResponsePrivate
 *
 * @brief  Private implementation for BatchGetDeploymentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetDeploymentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetDeploymentsResponse instance.
 */
BatchGetDeploymentsResponsePrivate::BatchGetDeploymentsResponsePrivate(
    BatchGetDeploymentsResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy BatchGetDeploymentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetDeploymentsResponsePrivate::BatchGetDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetDeploymentsResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
