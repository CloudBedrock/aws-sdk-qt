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

#include "listqueryexecutionsresponse.h"
#include "listqueryexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::ListQueryExecutionsResponse
 *
 * \brief The ListQueryExecutionsResponse class provides an interace for Athena ListQueryExecutions responses.
 *
 * \ingroup Athena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::listQueryExecutions
 */

/*!
 * @brief  Constructs a new ListQueryExecutionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListQueryExecutionsResponse::ListQueryExecutionsResponse(
        const ListQueryExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new ListQueryExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListQueryExecutionsRequest(request));
    setReply(reply);
}

const ListQueryExecutionsRequest * ListQueryExecutionsResponse::request() const
{
    Q_D(const ListQueryExecutionsResponse);
    return static_cast<const ListQueryExecutionsRequest *>(d->request);
}

/*!
 * @brief  Parse a Athena ListQueryExecutions response.
 *
 * @param  response  Response to parse.
 */
void ListQueryExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListQueryExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListQueryExecutionsResponsePrivate
 *
 * \brief Private implementation for ListQueryExecutionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListQueryExecutionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListQueryExecutionsResponse instance.
 */
ListQueryExecutionsResponsePrivate::ListQueryExecutionsResponsePrivate(
    ListQueryExecutionsResponse * const q) : AthenaResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Athena ListQueryExecutionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListQueryExecutionsResponsePrivate::parseListQueryExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQueryExecutionsResponse"));
    /// @todo
}

} // namespace Athena
} // namespace QtAws
